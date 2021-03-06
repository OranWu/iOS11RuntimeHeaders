/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXSkipButton : SXButton {
    SXAutoLayoutLabel * _skipInLabel;
    unsigned long long  _threshold;
    SXAutoLayoutLabel * _thresholdLabel;
}

@property (nonatomic, retain) SXAutoLayoutLabel *skipInLabel;
@property (nonatomic) unsigned long long threshold;
@property (nonatomic, retain) SXAutoLayoutLabel *thresholdLabel;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setSkipInLabel:(id)arg1;
- (void)setThreshold:(unsigned long long)arg1;
- (void)setThresholdLabel:(id)arg1;
- (id)skipInLabel;
- (unsigned long long)threshold;
- (id)thresholdLabel;
- (void)updateConstraints;

@end
