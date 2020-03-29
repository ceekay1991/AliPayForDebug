//
//  BBASMCallTraceProfilerEntrance.m
//  BBAMNP
//
//  Created by chenronghang on 2020/2/17.
//  Copyright © 2020 Baidu. All rights reserved.
//

#import "BBASMCallTraceProfilerEntrance.h"
#import "BBASMCallTraceInterface.h"
#import "BBASMTimeProfilerVC.h"
#import "BBASMCallTraceRunTime.h"
#import <objc/runtime.h>
#import <objc/message.h>


__attribute__((constructor)) static void entry() {
    NSLog(@"[BBASMCallTraceProfilerEntrance Init]");
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"AAAPBootStartPoint")
                                    sel:NSSelectorFromString(@"load")
                              withClass:[BBASMCallTraceProfilerEntrance class]
                                withSEL:NSSelectorFromString(@"__hook_load")
                          isClassMethod:YES];
    
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 13.0) {
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"DTBaseReq")
                                        sel:NSSelectorFromString(@"appBundleIdentifier")
                                  withClass:[BBASMCallTraceProfilerEntrance class]
                                    withSEL:NSSelectorFromString(@"__bundleIdentifier")];
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"NSBundle")
                                              sel:NSSelectorFromString(@"infoDictionary")
                                        withClass:[BBASMCallTraceProfilerEntrance class]
                                          withSEL:NSSelectorFromString(@"__infoDictionary")];
        
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"NSBundle")
                                        sel:NSSelectorFromString(@"bundleIdentifier")
                                  withClass:[BBASMCallTraceProfilerEntrance class]
                                    withSEL:NSSelectorFromString(@"___bundleIdentifier")];
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"DTOpenAPI")
                                        sel:NSSelectorFromString(@"appBundleIdentifier")
                                  withClass:[BBASMCallTraceProfilerEntrance class]
                                    withSEL:NSSelectorFromString(@"class_bundleIdentifier")
                              isClassMethod:YES];
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"SecurityGuardStaticDataStore")
                                        sel:NSSelectorFromString(@"getExtraData:")
                                  withClass:[BBASMCallTraceProfilerEntrance class]
                                    withSEL:NSSelectorFromString(@"_getExtraData:")];
        
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"PLCrashReporter")
                                        sel:NSSelectorFromString(@"enableCrashReporterAndReturnError:")
                                  withClass:[BBASMCallTraceProfilerEntrance class]
                                    withSEL:NSSelectorFromString(@"_enableCrashReporterAndReturnError:")];
        [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"ALULoginNewcomerViewController")
                                        sel:NSSelectorFromString(@"onLogin")
                                  withClass:[BBASMCallTraceProfilerEntrance class]
                                    withSEL:NSSelectorFromString(@"_onLogin")];
        
        
    }
}
@implementation BBASMCallTraceProfilerEntrance



#ifdef BBASMCallTraceEnable

+ (void)load {
    [self swizzleMethods];
}
#endif
- (NSString *)__bundleIdentifier {
  return @"com.alipay.iphoneclient";
}

- (NSString *)___bundleIdentifier {
    if ([NSThread isMainThread]) {
        return [self ___bundleIdentifier];
    }
    return @"com.alipay.iphoneclient";
}

- (NSDictionary *)__infoDictionary {
    NSMutableDictionary *dic  = [[NSMutableDictionary alloc] initWithDictionary:[self __infoDictionary]];
    if (![NSThread isMainThread]) {
       [dic setObject:@"com.alipay.iphoneclient" forKey:@"CFBundleIdentifier"];
    }
    return dic;
}

+ (NSString *)class_bundleIdentifier {
  return @"com.alipay.iphoneclient";
}
+ (void)__hook_load {
    NSLog(@"BBASMCallTraceEnable __hook_load");
}
+ (void)swizzleMethods {
    [self addShowCallTraceViewEntrance];
    //打开小程序
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"DFMicroApplicationManager")
                                    sel:NSSelectorFromString(@"startApplication:params:appClearTop:launchMode:")
                              withClass:[self class]
                                withSEL:@selector(hook_startApplication:params:appClearTop:launchMode:)];
    
    //小程序加载完成
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"NXIAppDelegate")
                                    sel:NSSelectorFromString(@"applicationDidFinishLaunching:")
                              withClass:[self class]
                                withSEL:@selector(_applicationDidFinishLaunching:)];
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"H5AppDelegate")
                                    sel:NSSelectorFromString(@"applicationDidFinishLaunching:")
                              withClass:[self class]
                                withSEL:@selector(_applicationDidFinishLaunching:)];
    //小程序关闭
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"TANavBarCenter")
                                    sel:NSSelectorFromString(@"onCloseBtnClicked:")
                              withClass:[self class]
                                withSEL:@selector(_onCloseBtnClicked:)];
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"RVTJSCExecutor")
                                    sel:NSSelectorFromString(@"runRunLoopThread")
                              withClass:[self class]
                                withSEL:@selector(_runRunLoopThread)
                          isClassMethod:YES];
    [BBASMCallTraceRunTime replaceClass:NSClassFromString(@"H5JSCExecutor")
                                    sel:NSSelectorFromString(@"runRunLoopThread")
                              withClass:[self class]
                                withSEL:@selector(_runRunLoopThread)
                          isClassMethod:YES];
}

- (void)_onLogin {
    UIViewController * vc = self;
    [vc dismissViewControllerAnimated:NO completion:nil];
}
- (id)_getExtraData:(id)arg1 {
    if ([arg1 isEqualToString:@"datacenter-default"]) {
        return @"CZDhBnowI9J5DFFMdHgvlBlqSVFMxHg6mi4zaCVJUfc=";
    }
    return [self _getExtraData:arg1];
}

- (BOOL)_enableCrashReporterAndReturnError:(NSError **)error {
    return YES;
}

+ (void)addShowCallTraceViewEntrance {
    Class cls = NSClassFromString(@"NXDefaultViewController");
    IMP mainimp = [self instanceMethodForSelector:@selector(showMainThreadCallTraceView:)];
    class_addMethod(cls, @selector(showMainThreadCallTraceView:), mainimp, "v@:");
    
    IMP jsimp = [self instanceMethodForSelector:@selector(showJSThreadCallTraceView:)];
    class_addMethod(cls, @selector(showJSThreadCallTraceView:), jsimp, "v@:");
    
    [BBASMCallTraceRunTime replaceClass:cls
                                    sel:NSSelectorFromString(@"viewDidAppear:")
                              withClass:[self class]
                                withSEL:@selector(_viewDidAppear:)];
}

- (BOOL)hook_startApplication:(id)arg1
                   params:(id)arg2
              appClearTop:(BOOL)arg3
               launchMode:(long long)arg4;
{
    [BBASMCallTraceProfilerEntrance startCallTrace];
    return [self hook_startApplication:arg1
                                params:arg2
                           appClearTop:arg3
                            launchMode:arg4];
}

- (void)_applicationDidFinishLaunching:(id)arg1; {
    [self _applicationDidFinishLaunching:arg1];
    [BBASMCallTrace stopTrace];
}

- (void)_onCloseBtnClicked:(id)arg1; {
    [BBASMCallTrace clearTrace];
    [self _onCloseBtnClicked:arg1];
    
    id application = ((id (*)(id, SEL))objc_msgSend)(NSClassFromString(@"DFMicroApplication") , NSSelectorFromString(@"currentApplication"));
    ((void *(*)(id, SEL))objc_msgSend)(application, NSSelectorFromString(@"forceExit"));
}

+ (void)_runRunLoopThread {
    [self _runRunLoopThread];
    NSThread *thread = [NSThread currentThread];
    NSString *name = [thread name];
    if (name) {
        [BBASMCallTrace setMonitorThreadName:name.UTF8String];
    }
}

- (void)_viewDidAppear:(BOOL)animated {
    [self _viewDidAppear:animated];
    UIViewController *viewController = (UIViewController *)self;
    
    UIView *view = [viewController view];
    int mainTag = 10002;
    int jsTag = 10003;
    if ([view viewWithTag:mainTag] || [view viewWithTag:jsTag]) {
        return;
    }
    CGFloat buttonH = 40;
    CGFloat buttonW = 100;
    CGFloat margin = 5;
    CGRect frame = CGRectMake(40, (CGRectGetHeight(view.frame)-buttonH-100)
                              , buttonW, buttonH);
    UIButton *button = [BBASMCallTraceProfilerEntrance buttonWithTitle:@"trace-主" frame:frame];
    [button addTarget:self action:@selector(showMainThreadCallTraceView:) forControlEvents:UIControlEventTouchUpInside];
    button.tag = mainTag;
    [view addSubview:button];
    
    CGFloat x = CGRectGetMaxX(frame) + margin * 4;
    frame.origin.x = x;
    UIButton *jsButton = [BBASMCallTraceProfilerEntrance buttonWithTitle:@"trace-js" frame:frame];
    [jsButton addTarget:self action:@selector(showJSThreadCallTraceView:) forControlEvents:UIControlEventTouchUpInside];
    jsButton.tag = jsTag;
    [view addSubview:jsButton];
}

+ (UIButton *)buttonWithTitle:(NSString *)title
                        frame:(CGRect)frame {
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = frame;
    [button setTitle:title forState:UIControlStateNormal];
    //#3388ff
    [button setBackgroundColor:[UIColor colorWithRed:51.0f/255.0f green:136.0f/255.0f blue:1.0f alpha:1]];
    button.layer.cornerRadius = 2;
    return button;
}

- (void)showMainThreadCallTraceView:(UIButton *)sender {
    [BBASMCallTraceProfilerEntrance showTimeProfile:[BBASMCallTrace getMainThreadCallRecord]
                                          currentVC:self];
}

- (void)showJSThreadCallTraceView:(UIButton *)sender {
    [BBASMCallTraceProfilerEntrance showTimeProfile:[BBASMCallTrace getOtherThreadCallRecord]
                                          currentVC:self];
}

+ (void)showTimeProfile:(BBASMThreadCallRecord *)record currentVC:(UIViewController *)vc{
    if (BBASMTimeProfilerVCHasShow) {
        return;
    }
    if (!record) {
        NSLog(@"无记录");
        return;
    }
    BBASMTimeProfilerVC *profilerVC = [[BBASMTimeProfilerVC alloc] initWithCallRecord:record];
    profilerVC.modalPresentationStyle = UIModalPresentationFullScreen;
    [vc presentViewController:profilerVC animated:YES completion:nil];
}

+ (void)startCallTrace {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [BBASMCallTrace setCostMinTime:500];
        [BBASMCallTrace setMaxDepth:100];
    });
    [BBASMCallTrace startTrace];
}

@end
