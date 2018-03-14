/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOrientationServiceServer : FBSystemServiceFacility {
    NSMutableSet * _interestedClients;
}

- (void)_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2;
- (void)_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2;
- (void)_updateInterest:(unsigned int)arg1 forClient:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (id)prerequisiteMilestones;

@end