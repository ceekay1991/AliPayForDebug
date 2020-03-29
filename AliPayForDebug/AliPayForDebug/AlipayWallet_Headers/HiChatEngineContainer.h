//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PKBaseContainer.h"

#import "AUDialogDelegate-Protocol.h"
#import "CTInputViewContainerDelegate-Protocol.h"
#import "CTQuickMenuBarContainerDelegate-Protocol.h"
#import "CTToastContainerDelegate-Protocol.h"
#import "CTToolBoxContainerDelegate-Protocol.h"
#import "CTTopBannerContainerDelegate-Protocol.h"
#import "HiChatEngineContainerDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class APMovieRecordPicker, AUBarButtonItem, CTInputViewContainer, CTLoadingHeadView, CTMessageOverlayView, CTQuickMenuBarContainer, CTToastContainer, CTToolBoxContainer, CTTopBannerContainer, HiChatSessionManager, MFMailComposeViewController, NSDictionary, NSMutableArray, NSString, UIButton, UITapGestureRecognizer, UIView;
@protocol HiChatContainerTableDataProtocol, HiChatSessionGeneralProtocol;

@interface HiChatEngineContainer : PKBaseContainer <UINavigationControllerDelegate, AUDialogDelegate, MFMailComposeViewControllerDelegate, HiChatEngineContainerDelegate, CTInputViewContainerDelegate, CTToolBoxContainerDelegate, CTQuickMenuBarContainerDelegate, CTToastContainerDelegate, CTTopBannerContainerDelegate>
{
    _Bool _keyboardAnimationLock;
    _Bool _keyboradIsShow;
    double _keyboardHeight;
    _Bool _isKeyboardObserver;
    _Bool _isViewWillAppear;
    _Bool _isViewDidAppear;
    _Bool _isViewWillDisappear;
    _Bool _needScrollBottom;
    _Bool _isFirstShow;
    _Bool _isLockAnimation;
    NSString *_lastStr;
    _Bool _showRedDot;
    _Bool _hasMore;
    _Bool _toolBoxIsShow;
    struct __CFRunLoopObserver *_runloopObserver;
    _Bool _enableTypingReport;
    NSDictionary *_launchOption;
    id <HiChatSessionGeneralProtocol> _currentSession;
    HiChatSessionManager *_sessionManager;
    id <HiChatContainerTableDataProtocol> _tableDataHandler;
    NSMutableArray *_refreshDataTasks;
    CTInputViewContainer *_inputContainer;
    CTToolBoxContainer *_toolBoxContainer;
    CTQuickMenuBarContainer *_quickMenuBarContainer;
    CTTopBannerContainer *_topBannerView;
    APMovieRecordPicker *_moviePicker;
    CTToastContainer *_toastContainer;
    UIView *_link2CardPopView;
    AUBarButtonItem *_backBarButtonItem;
    AUBarButtonItem *_rightBarButtonItem;
    CTLoadingHeadView *_loadingView;
    CTMessageOverlayView *_link2CardBgView;
    UITapGestureRecognizer *_tapGesture;
    UIButton *_unreadPicker;
    MFMailComposeViewController *_mailComposer;
}

@property(retain, nonatomic) MFMailComposeViewController *mailComposer; // @synthesize mailComposer=_mailComposer;
@property(retain, nonatomic) UIButton *unreadPicker; // @synthesize unreadPicker=_unreadPicker;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) CTMessageOverlayView *link2CardBgView; // @synthesize link2CardBgView=_link2CardBgView;
@property(retain, nonatomic) CTLoadingHeadView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AUBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) AUBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIView *link2CardPopView; // @synthesize link2CardPopView=_link2CardPopView;
@property(retain, nonatomic) CTToastContainer *toastContainer; // @synthesize toastContainer=_toastContainer;
@property(retain, nonatomic) APMovieRecordPicker *moviePicker; // @synthesize moviePicker=_moviePicker;
@property(retain, nonatomic) CTTopBannerContainer *topBannerView; // @synthesize topBannerView=_topBannerView;
@property(retain, nonatomic) CTQuickMenuBarContainer *quickMenuBarContainer; // @synthesize quickMenuBarContainer=_quickMenuBarContainer;
@property(retain, nonatomic) CTToolBoxContainer *toolBoxContainer; // @synthesize toolBoxContainer=_toolBoxContainer;
@property(retain, nonatomic) CTInputViewContainer *inputContainer; // @synthesize inputContainer=_inputContainer;
@property(nonatomic) _Bool enableTypingReport; // @synthesize enableTypingReport=_enableTypingReport;
@property(retain, nonatomic) NSMutableArray *refreshDataTasks; // @synthesize refreshDataTasks=_refreshDataTasks;
@property(retain, nonatomic) id <HiChatContainerTableDataProtocol> tableDataHandler; // @synthesize tableDataHandler=_tableDataHandler;
@property(retain, nonatomic) HiChatSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) id <HiChatSessionGeneralProtocol> currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) NSDictionary *launchOption; // @synthesize launchOption=_launchOption;
- (void).cxx_destruct;
- (_Bool)canOpenTopBanner;
- (void)topBannerFullScreenMode;
- (void)topBannerHalfScreenMode;
- (void)chatEngineContainerCloseTopBannerWithAnimation:(_Bool)arg1;
- (_Bool)topBannerOpened;
- (double)getTopInset;
- (void)didDismissToastView:(id)arg1 withIdentifier:(id)arg2;
- (void)dismissAllToastView;
- (void)dismissToastViewWithIdentifier:(id)arg1;
- (void)showCoverAlertViewInView:(CDUnknownBlockType)arg1;
- (_Bool)showToastView:(id)arg1 identifier:(id)arg2 origin:(struct CGPoint)arg3 duration:(double)arg4 appearAnimation:(CDUnknownBlockType)arg5 dismissAnimation:(CDUnknownBlockType)arg6 dismissBlock:(CDUnknownBlockType)arg7;
- (_Bool)showToastView:(id)arg1 identifier:(id)arg2 origin:(struct CGPoint)arg3 duration:(double)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (id)getHiChatContainerView;
- (void)setupToastContainer;
- (void)dismissVoiceToastView:(id)arg1;
- (void)showVoiceToastView:(id)arg1;
- (id)overlayView:(id)arg1 didHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)hideLinkCardAnimate:(_Bool)arg1;
- (void)autoHideLinkCard;
- (void)autoHideLinkCardAfterDelay:(double)arg1;
- (void)showLinkCardPopView:(id)arg1 withShowDuration:(id)arg2;
- (_Bool)checkSendMessageWithText:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)showMailComposerWithMailAddr:(id)arg1;
- (void)showActionSheet:(id)arg1;
- (void)clearTextInput;
- (void)groupViewDidChanage:(id)arg1;
- (void)closeToolsView;
- (void)configInputContainerInputStyle:(id)arg1;
- (void)configInputContainerInputMode:(int)arg1;
- (void)showRecentPhoto;
- (void)showImagePicker;
- (void)closeInputBox;
- (void)endEditInputView;
- (void)inputViewHeightChanged:(id)arg1 style:(id)arg2 lastStyle:(id)arg3;
- (void)enterTextInputMode;
- (id)internalInputTextView;
- (_Bool)isTextInputFirstResponder;
- (id)emptyTopBannerCategory;
- (id)defautTopBannerCategory;
- (void)setupTopBannerContainer;
- (void)setupQuickMenuBarContainer;
- (void)setupInputView;
- (_Bool)isMessageType;
- (void)adjustLinkCardFrame;
- (void)keyboardWeakup;
- (void)closeFollowView;
- (void)midTableViewMode:(struct CGRect)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)needAdjustInputViewForiOS11StoreKeyboardHeight:(double)arg1 keyboardHeight:(double)arg2 inputViewHeight:(double)arg3;
- (void)doKeyboardAnimation:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)closeMoviePicker:(_Bool)arg1;
- (void)showMoviePikcer:(_Bool)arg1;
- (void)weakupPicker;
- (double)bottomOfTable;
- (double)heightOfQuickMenuBar;
- (void)menuBarDidChangeHeight:(double)arg1 previousHeight:(double)arg2;
- (id)defautToolBarCategory;
- (void)reloadToolBoxAppWithAppId:(id)arg1;
- (void)updateToolBoxAppWithAppId:(id)arg1 progress:(double)arg2;
- (void)refreshRedDotStatus:(_Bool)arg1;
- (void)refreshTopBannerWithData:(id)arg1;
- (void)layoutTableViewAfterQuickMenuBarRefresh;
- (void)refreshQuickMenuBarActionItem:(id)arg1;
- (void)refreshToolBoxAppCenterData:(id)arg1 stageCode:(id)arg2;
- (void)hideInputView:(id)arg1 style:(_Bool)arg2;
- (void)toolBoxEmojiComponenEmojiWillDelete;
- (void)toolBoxEmojiComponenEmojiWillSend;
- (void)toolBoxEmojiComponenEmojiTaped:(id)arg1;
- (void)hideToolbox:(id)arg1 animation:(_Bool)arg2;
- (void)noticeEmojiViewHaveText:(_Bool)arg1;
- (void)generalToolBoxWillWakeupWithCategory:(id)arg1 inputView:(id)arg2;
- (void)addRefreshTaskWithBlock:(CDUnknownBlockType)arg1 taskID:(id)arg2;
- (void)createRefreshTaskWithTaskID:(id)arg1;
- (void)stopObserveRunloop;
- (void)startObserveRunloop;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callPhoneActionWithPhoneNo:(id)arg1;
- (id)currentInputText;
- (void)configInputText:(id)arg1;
- (void)saveDraft:(id)arg1 command:(id)arg2;
- (id)inputStyleOfInputContainer;
- (unsigned long long)numberOfSections;
- (_Bool)presentedViewControllerExists;
- (_Bool)isCellVisible:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)changedOrigFrameInPhotoBrowserAtIndex:(long long)arg1;
- (id)imageCellsInfoWithVisiableCells;
- (id)findActiveWidgetInCellWithIndex:(long long)arg1;
- (struct CGRect)multimediaOrigFrameWithIdentifier:(id)arg1 clientMsgId:(id)arg2 index:(long long)arg3;
- (void)presentModalTagToastWithIcon:(int)arg1 text:(id)arg2 duration:(double)arg3 delay:(double)arg4 logTag:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dismissHUDAnimated:(_Bool)arg1;
- (id)showHUDAnimated:(_Bool)arg1;
- (void)presentToastWithIcon:(int)arg1 text:(id)arg2 duration:(double)arg3;
- (id)draftOfInputView;
- (id)indexPathForCell:(id)arg1;
- (void)removeAndUpdateTableCellWithIndexs:(id)arg1;
- (_Bool)isTableViewShowBottom:(long long)arg1;
- (void)socialItemInfoDidUpdate:(id)arg1;
- (void)socialSessionInfoDidUpdate:(id)arg1;
- (_Bool)mfScrolling;
- (_Bool)isCurrentTableView:(id)arg1;
- (_Bool)shouldLoadNewPage;
- (_Bool)shoulLoadBefore;
- (void)configTableContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGSize tableContentSize;
@property(readonly, nonatomic) struct CGPoint tableContentOffset;
- (void)loadingViewShow:(_Bool)arg1;
- (void)refreshTitle;
- (void)reloadTableview;
- (void)autoScrollWithDataItems:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollTableViewToBottomWithAnimation:(_Bool)arg1 scorllCondition:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)rightButtonClicked:(id)arg1;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (long long)customStatusBarStytle;
- (void)jumpUnreadTop;
- (_Bool)checkShouldHideUnreadPickerByIndexPath:(id)arg1;
- (void)showOrHideUnreadCount:(_Bool)arg1;
- (void)gestureTap:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popBack;
@property(nonatomic) _Bool hasMore;
- (id)cellDelegate;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)viewWillDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadAfterDidAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupFrameWithInputState:(long long)arg1 tableFrame:(struct CGRect)arg2;
- (struct CGRect)prepareFrameSetupWithInputState:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)resumeViewDidAppearIsResume:(_Bool)arg1;
- (void)resumeWithOptions:(id)arg1 isResume:(_Bool)arg2;
- (void)viewDidLoad;
- (id)indexPathDictionary;
- (id)dataArray;
- (void)addExposureChatMessage:(id)arg1;
- (void)setupUI;
- (id)unknowCellTemplateIdByMsgData:(id)arg1;
- (id)cellClassName;
- (id)strategyId;
- (id)initWithLaunchOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
