//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageBoxBaseCell.h"

#import "FBDocumentDelegate-Protocol.h"

@class FBDocument, MessageBoxBillView, MessageBoxCommonHeaderView, NSString, UIView;

@interface MessageBoxFlyBirdCell : MessageBoxBaseCell <FBDocumentDelegate>
{
    FBDocument *_doc;
    NSString *_templateId;
    MessageBoxCommonHeaderView *_headerView;
    MessageBoxBillView *_billView;
    UIView *_line;
    NSString *_sceneUrl;
}

+ (double)cellHeightWithData:(id)arg1 withDelegate:(id)arg2 homeConfig:(id)arg3;
@property(copy, nonatomic) NSString *sceneUrl; // @synthesize sceneUrl=_sceneUrl;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) MessageBoxBillView *billView; // @synthesize billView=_billView;
@property(retain, nonatomic) MessageBoxCommonHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) FBDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (id)createSwipeBtn:(id)arg1;
- (id)cellSwipeRowActions;
- (id)cellRowActions;
- (void)onHeaderClick:(id)arg1;
- (void)updateCellWithData:(id)arg1 withDelegate:(id)arg2 homeConfig:(id)arg3 cellIndex:(id)arg4;
- (void)addHeaderAndBillView;
- (struct CGSize)onContainerSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
