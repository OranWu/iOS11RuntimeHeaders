/* Generated by RuntimeBrowser.
 */

@protocol HUCCGridViewControllerDelegate <NSObject>

@required

- (bool)gridViewControllerShouldUsePunchOutBackgrounds:(HUCCGridViewController *)arg1;
- (bool)isDeviceUnlockedForGridViewController:(HUCCGridViewController *)arg1;
- (NAFuture *)prepareForActionRequiringDeviceUnlockForGridViewController:(HUCCGridViewController *)arg1;

@optional

- (void)gridViewControllerDidEndApplyingDynamicBackgrounds:(HUCCGridViewController *)arg1;
- (void)gridViewControllerWillBeginApplyingDynamicBackgrounds:(HUCCGridViewController *)arg1;

@end
