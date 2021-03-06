/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSuggestionsForClustersRequest : VNRequest {
    NSArray * _clusterIDs;
}

@property (nonatomic, readonly, copy) NSArray *clusterIDs;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)clusterIDs;
- (bool)hasCancellationHook;
- (id)initWithClusterIDs:(id)arg1;
- (id)initWithClusterIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)internalCancelInContext:(id)arg1 error:(id*)arg2;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;

@end
