/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKSplitHeaderView : TLKView <NUIContainerGridViewDelegate> {
    NUIContainerGridView * _gridView;
    TLKImage * _leadingImage;
    TLKImageView * _leadingImageView;
    TLKMultilineText * _leadingSubtitle;
    TLKVibrantLabel * _leadingSubtitleLabel;
    TLKMultilineText * _leadingTitle;
    TLKVibrantLabel * _leadingTitleLabel;
    bool  _shouldBadgeSubtitle;
    TLKMultilineText * _subtitle1;
    TLKVibrantLabel * _subtitle1Label;
    TLKMultilineText * _subtitle2;
    TLKBadgedLabel * _subtitle2Label;
    TLKMultilineText * _title;
    TLKVibrantLabel * _titleLabel;
    TLKImage * _trailingImage;
    TLKImageView * _trailingImageView;
    TLKMultilineText * _trailingSubtitle;
    TLKVibrantLabel * _trailingSubtitleLabel;
    TLKMultilineText * _trailingTitle;
    TLKVibrantLabel * _trailingTitleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUIContainerGridView *gridView;
@property (readonly) unsigned long long hash;
@property (retain) TLKImage *leadingImage;
@property (retain) TLKImageView *leadingImageView;
@property (retain) TLKMultilineText *leadingSubtitle;
@property (retain) TLKVibrantLabel *leadingSubtitleLabel;
@property (retain) TLKMultilineText *leadingTitle;
@property (retain) TLKVibrantLabel *leadingTitleLabel;
@property bool shouldBadgeSubtitle;
@property (retain) TLKMultilineText *subtitle1;
@property (retain) TLKVibrantLabel *subtitle1Label;
@property (retain) TLKMultilineText *subtitle2;
@property (retain) TLKBadgedLabel *subtitle2Label;
@property (readonly) Class superclass;
@property (retain) TLKMultilineText *title;
@property (retain) TLKVibrantLabel *titleLabel;
@property (retain) TLKImage *trailingImage;
@property (retain) TLKImageView *trailingImageView;
@property (retain) TLKMultilineText *trailingSubtitle;
@property (retain) TLKVibrantLabel *trailingSubtitleLabel;
@property (retain) TLKMultilineText *trailingTitle;
@property (retain) TLKVibrantLabel *trailingTitleLabel;

+ (id)footnoteFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveAlignmentRectInsets;
- (id)firstRowOfViews;
- (id)grid;
- (id)gridView;
- (id)init;
- (id)leadingImage;
- (id)leadingImageInView;
- (id)leadingImageView;
- (id)leadingSubtitle;
- (id)leadingSubtitleLabel;
- (id)leadingSubtitleText;
- (id)leadingTitle;
- (id)leadingTitleLabel;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (bool)secondRowIsHidden;
- (id)secondRowOfViews;
- (void)setGridView:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingImageView:(id)arg1;
- (void)setLeadingSubtitle:(id)arg1;
- (void)setLeadingSubtitleLabel:(id)arg1;
- (void)setLeadingTitle:(id)arg1;
- (void)setLeadingTitleLabel:(id)arg1;
- (void)setShouldBadgeSubtitle:(bool)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle1Label:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setSubtitle2Label:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingImageView:(id)arg1;
- (void)setTrailingSubtitle:(id)arg1;
- (void)setTrailingSubtitleLabel:(id)arg1;
- (void)setTrailingTitle:(id)arg1;
- (void)setTrailingTitleLabel:(id)arg1;
- (bool)shouldBadgeSubtitle;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitle1;
- (id)subtitle1Label;
- (id)subtitle2;
- (id)subtitle2Label;
- (id)subtitleLabelText;
- (id)thirdRowOfViews;
- (id)title;
- (id)titleFont;
- (id)titleLabel;
- (id)titleLabelText;
- (id)trailingImage;
- (id)trailingImageInView;
- (id)trailingImageView;
- (id)trailingSubtitle;
- (id)trailingSubtitleLabel;
- (id)trailingSubtitleText;
- (id)trailingTitle;
- (id)trailingTitleLabel;
- (id)vibrantFootnoteLabel:(bool)arg1;

@end