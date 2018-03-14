/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleProgressManager : NSObject {
    <PXPeopleProgressDataSource> * _dataSource;
    bool  _monitoringProgress;
    bool  _processingComplete;
    unsigned long long  _processingStatus;
    double  _progress;
    NSTimer * _statusTimer;
    double  _updateInterval;
}

@property (nonatomic, retain) <PXPeopleProgressDataSource> *dataSource;
@property (readonly) bool featureUnlocked;
@property (readonly) bool hasFaceProcessingTodo;
@property (getter=isMonitoringProgress, nonatomic) bool monitoringProgress;
@property (readonly) bool processingComplete;
@property (nonatomic) unsigned long long processingStatus;
@property double progress;
@property (readonly) bool shouldUseInterstitial;
@property (readonly) bool shouldUseProgressFooter;
@property (nonatomic, retain) NSTimer *statusTimer;
@property (nonatomic) double updateInterval;

- (void).cxx_destruct;
- (bool)_progressComplete:(double)arg1;
- (void)_scheduleNextUpdate;
- (void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (id)dataSource;
- (bool)featureUnlocked;
- (bool)hasFaceProcessingTodo;
- (bool)hasSubstantialProcessingUsingMinAssetCount:(bool)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (bool)isMonitoringProgress;
- (bool)processingComplete;
- (unsigned long long)processingStatus;
- (double)progress;
- (void)setDataSource:(id)arg1;
- (void)setMonitoringProgress:(bool)arg1;
- (void)setProcessingStatus:(unsigned long long)arg1;
- (void)setProgress:(double)arg1;
- (void)setStatusTimer:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (bool)shouldUseInterstitial;
- (bool)shouldUseProgressFooter;
- (id)statusTimer;
- (double)updateInterval;
- (void)updateProgressWithForce:(bool)arg1;

@end