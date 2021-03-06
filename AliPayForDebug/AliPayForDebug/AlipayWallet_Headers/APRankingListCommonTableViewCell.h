//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APCommonSelectTableViewCell.h"

@class SUImageView, UIColor, UILabel;

@interface APRankingListCommonTableViewCell : APCommonSelectTableViewCell
{
    _Bool _showIndex;
    _Bool _mySelfIsValidate;
    UIColor *_tagLabelTextColor;
    SUImageView *_indexView;
    UILabel *_indexLabel;
}

+ (double)heightOfCell;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) SUImageView *indexView; // @synthesize indexView=_indexView;
@property(nonatomic) _Bool mySelfIsValidate; // @synthesize mySelfIsValidate=_mySelfIsValidate;
@property(retain, nonatomic) UIColor *tagLabelTextColor; // @synthesize tagLabelTextColor=_tagLabelTextColor;
@property(nonatomic) _Bool showIndex; // @synthesize showIndex=_showIndex;
- (void).cxx_destruct;
- (void)refreshDetail;
- (void)refreshTitleLabel;
- (double)titleTextValidWidth:(double)arg1;
- (struct CGSize)labelTagValidSize;
- (struct CGSize)indexLabelValidSize;
- (id)modifyDigitalColor:(id)arg1 normalColor:(id)arg2 attributedStr:(id)arg3;
- (void)refreshFriendSelectionTagWithTagArr:(id)arg1;
- (void)refreshIconImage;
- (void)refreshCellIndex;
- (void)removeTagViewArr;
- (void)refreshCellWithItem:(id)arg1;
- (void)adjustCommonItem:(double)arg1;
- (double)adjustIconImage:(double)arg1;
- (void)adjustFrames;
- (void)setupIndexLabel;
- (void)setupIndexView;
- (void)setupUI;
- (void)awakeFromNib;

@end

