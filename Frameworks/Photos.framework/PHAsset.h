/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAsset : PHObject <CLSInvestigationItem, CLSSnapshotSupportProtocol, MiroMetadata, PUEditableAsset, PVAssetProtocol, PXDisplayAsset, PXLayoutItemInput, PXPlacesGeotaggable, PXShareable, _PLImageLoadingAsset> {
    NSDate * _adjustmentTimestamp;
    bool  _assetDescriptionWasSet;
    int  _avalanchePickType;
    NSString * _burstIdentifier;
    CLLocation * _cachedLocation;
    bool  _canUseLocationCoordinateForLocation;
    NSString * _cloudAssetGUID;
    bool  _cloudIsDeletable;
    long long  _cloudPlaceholderKind;
    bool  _complete;
    NSDate * _creationDate;
    double  _curationScore;
    NSString * _directory;
    double  _duration;
    int  _exifOrientation;
    id  _faceAdjustmentVersion;
    double  _faceAreaMaxX;
    double  _faceAreaMaxY;
    double  _faceAreaMinX;
    double  _faceAreaMinY;
    NSArray * _faceRegions;
    bool  _favorite;
    NSString * _filename;
    unsigned long long  _groupingState;
    NSString * _groupingUUID;
    bool  _hasAdjustments;
    bool  _hidden;
    bool  _isPhotoIris;
    unsigned long long  _localResourcesState;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    NSData * _locationData;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    NSDate * _modificationDate;
    NSString * _originalColorSpace;
    unsigned long long  _persistenceState;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    long long  _playbackStyle;
    unsigned short  _playbackVariation;
    short  _savedAssetType;
    NSSet * _sceneClassifications;
    unsigned long long  _thumbnailIndex;
    NSDate * _trashedDate;
    NSString * _uniformTypeIdentifier;
    long long  _videoCpDurationValue;
    unsigned short  _videoCpVisibilityState;
}

@property (nonatomic, readonly) NSURL *ALAssetURL;
@property (getter=isAdjusted, nonatomic, readonly) bool adjusted;
@property (nonatomic, readonly) PHAdjustmentData *adjustmentData;
@property (nonatomic, readonly) NSDate *adjustmentTimestamp;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic) bool assetDescriptionWasSet;
@property (nonatomic, readonly) int avalanchePickType;
@property (nonatomic, readonly) double badQualityThreshold;
@property (nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) bool canPerformSharingAction;
@property (nonatomic, readonly) bool canPlayAutoloop;
@property (nonatomic, readonly) bool canPlayLongExposure;
@property (nonatomic, readonly) bool canPlayLoopingVideo;
@property (nonatomic, readonly) bool canPlayMirror;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (nonatomic) bool canUseLocationCoordinateForLocation;
@property (nonatomic, readonly) NSString *cloudIdentifier;
@property (nonatomic, readonly, copy) NSString *cloudIdentifier;
@property (nonatomic, readonly) bool cloudIsDeletable;
@property (nonatomic, readonly) long long cloudPlaceholderKind;
@property (nonatomic, readonly) double clsContentScore;
@property (nonatomic, readonly) NSDate *clsDate;
@property (nonatomic, readonly) NSDate *clsDistanceIdentity;
@property (nonatomic, readonly) NSData *clsDistanceIdentity;
@property (nonatomic, readonly) float clsExposureScore;
@property (nonatomic, readonly) bool clsIsHDR;
@property (nonatomic, readonly) bool clsIsSDOF;
@property (nonatomic, readonly) CLLocation *clsLocation;
@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, readonly) NSArray *clsPeopleNames;
@property (nonatomic, readonly) long long clsPlayCount;
@property (nonatomic, readonly, copy) NSSet *clsSceneClassifications;
@property (nonatomic, readonly) long long clsShareCount;
@property (nonatomic, readonly) float clsSharpnessScore;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) long long clsViewCount;
@property (nonatomic, readonly) bool complete;
@property (getter=isContentAdjustmentAllowed, nonatomic, readonly) bool contentAdjustmentAllowed;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) double curationScore;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *directory;
@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) id faceAdjustmentVersion;
@property (nonatomic, readonly) double faceAreaMaxX;
@property (nonatomic, readonly) double faceAreaMaxY;
@property (nonatomic, readonly) double faceAreaMinX;
@property (nonatomic, readonly) double faceAreaMinY;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned long long groupingState;
@property (nonatomic, readonly) NSString *groupingUUID;
@property (nonatomic, readonly) bool hasAdjustments;
@property (nonatomic, readonly) bool hasLocallyAvailableUsefulResource;
@property (nonatomic, readonly) bool hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (getter=isHighFramerateVideo, nonatomic, readonly) bool highFramerateVideo;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) NSDictionary *imageProperties;
@property (getter=isInPlaceVideoTrimAllowed, nonatomic, readonly) bool inPlaceVideoTrimAllowed;
@property (nonatomic, readonly) bool irisVideoMeetsActionRequirements;
@property (nonatomic, readonly) bool irisVideoMeetsQualityRequirements;
@property (nonatomic, readonly) bool isAnimatedGIF;
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isAudio;
@property (nonatomic, readonly) bool isBlurry;
@property (nonatomic, readonly) bool isCloudPhotoLibraryAsset;
@property (nonatomic, readonly) bool isCloudPlaceholder;
@property (nonatomic, readonly) bool isCloudSharedAsset;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) bool isHDVideo;
@property (nonatomic, readonly) bool isHighFrameRateVideo;
@property (nonatomic, readonly) bool isIncludedInCloudFeeds;
@property (nonatomic, readonly) bool isIncludedInMoments;
@property (nonatomic, readonly) bool isJPEG;
@property (nonatomic, readonly) bool isLoopingVideo;
@property (nonatomic, readonly) bool isPartOfBurst;
@property (nonatomic, readonly) bool isPartOfGroup;
@property (nonatomic, readonly) bool isPhoto;
@property (nonatomic, readonly) bool isPhotoIris;
@property (nonatomic, readonly) bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) bool isPhotoStreamPhoto;
@property (nonatomic, readonly) bool isPrimaryInGroup;
@property (nonatomic, readonly) bool isRAW;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) bool isSloMoAsset;
@property (nonatomic, readonly) bool isStreamedVideo;
@property (nonatomic, readonly) bool isTemporaryPlaceholder;
@property (nonatomic, readonly) bool isTimelapsePlaceholder;
@property (nonatomic, readonly) bool isUtility;
@property (nonatomic, readonly) bool isVideo;
@property (getter=isLivePhoto, nonatomic, readonly) bool livePhoto;
@property (getter=isLivePhotoVisibilityAdjustmentAllowed, nonatomic, readonly) bool livePhotoVisibilityAdjustmentAllowed;
@property (nonatomic, readonly) unsigned long long livePhotoVisibilityState;
@property (nonatomic, readonly) NSDate *localDate;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long localResourcesState;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } locationCoordinate;
@property (nonatomic, readonly) NSData *locationData;
@property (nonatomic, readonly) double maximumDurationInSecondsJunkAndUserTrim;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSString *metadataDebugDescription;
@property (nonatomic, readonly) MiroVPIrisRecommendedMetadataRange *miro_IrisUsableRange;
@property (nonatomic, readonly) bool miro_IrisVideoUsable;
@property (nonatomic, readonly) double miro_IrisVideoUsableDuration;
@property (nonatomic, readonly) long long miro_analysisVersion;
@property (nonatomic, retain) PHAssetResource *miro_cachedLocalMostUsefulResource;
@property (nonatomic, retain) NSArray *miro_desirableRanges;
@property (nonatomic, readonly) unsigned long long miro_faceCount;
@property (nonatomic, readonly) unsigned long long miro_flags;
@property (nonatomic, readonly) bool miro_isBlacklisted;
@property (nonatomic, readonly) bool miro_isJunk;
@property (nonatomic, readonly) unsigned long long miro_performedAnalysisTypes;
@property (nonatomic, readonly) double miro_score;
@property (nonatomic, readonly) unsigned long long miro_voiceCount;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSArray *newAutoEditRanges;
@property (nonatomic, readonly) NSString *originalColorSpace;
@property (nonatomic, readonly) int originalEXIFOrientation;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly, copy) NSString *pathForOriginalImageFile;
@property (nonatomic, readonly, copy) NSString *pathForOriginalVideoFile;
@property (nonatomic, readonly, copy) NSString *pathForTrimmedVideoFile;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) unsigned long long persistenceState;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) NSArray *pickListRanges;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) unsigned short playbackVariation;
@property (nonatomic, readonly) long long px_currentVariationType;
@property (nonatomic, readonly) bool representsBurst;
@property (nonatomic, readonly) bool requiresConfidentiality;
@property (getter=isResourceDownloadPossible, nonatomic, readonly) bool resourceDownloadPossible;
@property (nonatomic, readonly) short savedAssetType;
@property (nonatomic, readonly) NSSet *sceneClassifications;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *thumbnailIdentifier;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSDate *universalDate;
@property (nonatomic, readonly) NSArray *userSetSloMoRange;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *variationSuggestionStatesDetails;
@property (nonatomic, readonly) long long videoCpDurationValue;
@property (nonatomic, readonly) unsigned short videoCpVisibilityState;
@property (nonatomic, readonly) PFVideoAVObjectBuilder *videoObjectBuilder;
@property (nonatomic, readonly) double weight;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_currentTimestampString;
+ (id)_descriptionForVariationSuggestionStates:(unsigned long long)arg1;
+ (id)_descriptionForVariationSuggestionType:(unsigned long long)arg1;
+ (unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)arg1;
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;
+ (id)_fetchCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 onlyKey:(bool)arg4;
+ (id)_fetchRepresentativeAssetInAssetCollection:(id)arg1;
+ (id)_imageManagerRequestLoggingQueue;
+ (id)_inq_highestImageManagerRequestIDsObserved;
+ (id)_inq_imageManagerRequestLogsByAssetUUID;
+ (id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg1 requestID:(long long)arg2;
+ (void)_inq_recordRequestID:(long long)arg1;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (bool)_isLivePhotoWithPhotoIris:(bool)arg1 hasAdjustments:(bool)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5;
+ (id)_requestResultInfoForImageInfo:(id)arg1 videoInfo:(id)arg2 adjustmentInfo:(id)arg3 renderingError:(id)arg4;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2;
+ (id)corePropertiesToFetch;
+ (long long)countOfAssetsWithLocationFromUUIDs:(id)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)faceWorkerPropertiesToFetch;
+ (id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForFaces:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPersons:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchMovieCuratedAssetsInMemory:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchReducedCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)fetchRepresentativeAssetsInAssetCollection:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)imageManagerPropertiesToFetch;
+ (bool)isOriginalKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id*)arg2;
+ (bool)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id*)arg2;
+ (id)locationPropertiesToFetch;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsBursts;
+ (bool)managedObjectSupportsHiddenState;
+ (bool)managedObjectSupportsMontage;
+ (bool)managedObjectSupportsSavedAssetType;
+ (bool)managedObjectSupportsTrashedState;
+ (bool)managedObjectSupportsVisibilityState;
+ (id)originalUniformTypeIdentifierForAsset:(id)arg1;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)ALAssetURL;
- (id)__dictionaryWithContentsOfData:(id)arg1;
- (long long)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(bool)arg2;
- (bool)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2;
- (id)_createAnalysisStatePropertyObject;
- (id)_createCommentPropertyObject;
- (void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)arg1 fetchDictionary:(id)arg2;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (id)_imageRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForImageProgress:(id /* block */)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(bool)arg3 resultHandler:(id /* block */)arg4;
- (id)_unfetchedPropertySetsFromPropertySets:(id)arg1;
- (id)_videoRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForVideoProgress:(id /* block */)arg3;
- (id)adjustmentProperties;
- (id)adjustmentTimestamp;
- (id)adjustmentVersion;
- (id)adjustmentsDebugMetadata;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3;
- (double)aspectRatio;
- (id)assetAnalysisStateProperties;
- (bool)assetDescriptionWasSet;
- (short)assetSource;
- (id)assetUserActivityProperties;
- (id)assetsLibraryURL;
- (int)avalanchePickType;
- (id)burstIdentifier;
- (unsigned long long)burstSelectionTypes;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canPerformSharingAction;
- (bool)canPlayAutoloop;
- (bool)canPlayLongExposure;
- (bool)canPlayLoopingVideo;
- (bool)canPlayMirror;
- (bool)canPlayPhotoIris;
- (bool)canUseLocationCoordinateForLocation;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (Class)changeRequestClass;
- (id)cloudIdentifier;
- (bool)cloudIsDeletable;
- (long long)cloudPlaceholderKind;
- (long long)cloudSharedAssetPlaceholderKind;
- (id)commentProperties;
- (bool)complete;
- (id)creationDate;
- (id)curationProperties;
- (double)curationScore;
- (id)debugFilename;
- (id)description;
- (id)descriptionProperties;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)directory;
- (id)distanceIdentity;
- (double)duration;
- (unsigned long long)effectiveThumbnailIndex;
- (int)exifOrientation;
- (id)faceAdjustmentVersion;
- (double)faceAreaMaxX;
- (double)faceAreaMaxY;
- (double)faceAreaMinX;
- (double)faceAreaMinY;
- (id)faceRegions;
- (void)fetchPropertySetsIfNeeded;
- (id)fileURLForAdjustedFullsizeImage;
- (id)fileURLForAdjustmentsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForFullsizeImage;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForLargePreview;
- (id)fileURLForMediumPreview;
- (id)fileURLForMutationsDirectory;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)fileURLForPenultimateFullsizeRenderVideo;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)fileURLForUnadjustedFullsizeImage;
- (id)fileURLForVideoComplementFile;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForXMPFile;
- (id)filename;
- (void)generateLargeThumbnailFileIfNecessary;
- (void)getFingerPrintForAssetType:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getMasterFingerPrintWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)groupingState;
- (id)groupingUUID;
- (bool)hasAdjustments;
- (bool)hasLegacyAdjustments;
- (bool)hasPhotoColorAdjustments;
- (long long)imageOrientation;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isAnimatedGIF;
- (bool)isAudio;
- (bool)isCloudPhotoLibraryAsset;
- (bool)isCloudPlaceholder;
- (bool)isCloudSharedAsset;
- (bool)isFavorite;
- (bool)isHDVideo;
- (bool)isHidden;
- (bool)isHighFrameRateVideo;
- (bool)isInFlight;
- (bool)isIncludedInCloudFeeds;
- (bool)isIncludedInMoments;
- (bool)isJPEG;
- (bool)isLocatedAtCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)isLoopingVideo;
- (bool)isMediaSubtype:(unsigned long long)arg1;
- (bool)isOriginalSRGB;
- (bool)isPartOfBurst;
- (bool)isPartOfGroup;
- (bool)isPhoto;
- (bool)isPhotoIris;
- (bool)isPhotoIrisPlaceholder;
- (bool)isPhotoStreamPhoto;
- (bool)isPrimaryImageFormat;
- (bool)isPrimaryInGroup;
- (bool)isRAW;
- (bool)isStreamedVideo;
- (bool)isTimelapsePlaceholder;
- (bool)isTrashed;
- (bool)isVariationSuggestionStatesUnknown;
- (bool)isVideo;
- (short)kind;
- (short)kindSubtype;
- (unsigned long long)localResourcesState;
- (id)location;
- (struct CLLocationCoordinate2D { double x1; double x2; })locationCoordinate;
- (id)locationData;
- (id)mainFileURL;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)messagesForRecentImageManagerRequests;
- (id)metadataDebugDescription;
- (id)modificationDate;
- (int)orientation;
- (id)originalColorSpace;
- (id)originalFileName;
- (long long)originalImageOrientation;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (id)originalMetadataProperties;
- (id)pathForAdjustedSRGBLargeThumbnailFile;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentDirectory;
- (id)pathForAdjustmentFile;
- (id)pathForFullsizeRenderImageFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForMediumThumbnailFile;
- (id)pathForMutationsDirectory;
- (id)pathForNonAdjustedFullsizeImageFile;
- (id)pathForNonAdjustedSRGBLargeThumbnailFile;
- (id)pathForOriginalFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForPenultimateFullsizeRenderVideoFile;
- (id)pathForSRGBLargeThumbnailFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForVideoPreviewFile;
- (unsigned long long)persistenceState;
- (id)photoIrisProperties;
- (id)photosOneUpProperties;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)pl_managedAsset;
- (id)pl_photoLibrary;
- (long long)playbackStyle;
- (unsigned short)playbackVariation;
- (void)recordImageManagerMessageForRequestID:(int)arg1 message:(id)arg2;
- (bool)representsBurst;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (short)savedAssetType;
- (id)sceneAnalysisProperties;
- (id)sceneClassifications;
- (void)setAssetDescriptionWasSet:(bool)arg1;
- (void)setCanUseLocationCoordinateForLocation:(bool)arg1;
- (unsigned long long)sourceType;
- (id)thumbnailIdentifier;
- (unsigned long long)thumbnailIndex;
- (id)trashedDate;
- (id)uniformTypeIdentifier;
- (id)variationSuggestionStatesDetails;
- (unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)arg1;
- (long long)videoCpDurationValue;
- (unsigned short)videoCpVisibilityState;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (long long)_pu_mediaTypeForAssets:(id)arg1;
+ (long long)pu_commonMediaTypeForPhotoCount:(long long)arg1 videoCount:(long long)arg2 otherCount:(long long)arg3;
+ (id)pu_typeStringForAssets:(id)arg1;
+ (id)pu_typeStringForAssetsWithIdentifiers:(id)arg1;
+ (id)pu_typeStringForMediaType:(long long)arg1;

- (id)imageProperties;
- (bool)isAdjusted;
- (bool)isAnimatedImage;
- (bool)isContentAdjustmentAllowed;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (bool)isHighFramerateVideo;
- (bool)isInPlaceVideoTrimAllowed;
- (bool)isLivePhoto;
- (bool)isLivePhotoVisibilityAdjustmentAllowed;
- (bool)isResourceDownloadPossible;
- (bool)isTemporaryPlaceholder;
- (unsigned long long)livePhotoVisibilityState;
- (id)localizedGeoDescription;
- (int)originalEXIFOrientation;
- (unsigned long long)originalFilesize;
- (id)pathForOriginalImageFile;
- (id)pathForOriginalVideoFile;
- (id)pathForTrimmedVideoFile;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (id)videoObjectBuilder;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)_coalescedRangesFromRanges:(id)arg1;
+ (double)_miro_analysisRelatedScoreMaxForVideo:(bool)arg1;
+ (double)_miro_camMotionScoreMaxForVideo:(bool)arg1;
+ (double)_miro_faceScoreMaxForVideo:(bool)arg1;
+ (double)_miro_junkScoreMaxForVideo:(bool)arg1;
+ (double)_miro_nonAnalysisRelatedScoreMaxForVideo:(bool)arg1;
+ (double)_miro_qualityScoreMaxForVideo:(bool)arg1;
+ (double)_miro_scoreMaxForVideo:(bool)arg1;
+ (double)_miro_voiceScoreMaxForVideo:(bool)arg1;
+ (id)constrainRange:(id)arg1 selectionStart:(int)arg2 duration:(int)arg3;
+ (int)endTimeForRangeModel:(id)arg1;
+ (id)fetchAssetLibraryURLsInAssetCollection:(id)arg1 withMediaType:(long long)arg2;
+ (id)fetchAssetWithLocalIdentifier:(id)arg1;
+ (id)fetchAssetWithURL:(id)arg1;
+ (id)fetchAssetsWithLocalIdentifierURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithURLs:(id)arg1 options:(id)arg2;
+ (int)maxEndTimeRespectingTrimmingForClip:(id)arg1 projectFrameRate:(int)arg2;
+ (long long)miroMegaPixelLimit;
+ (bool)miro_isOkayAssetResource:(id)arg1;
+ (bool)mirobackend_isCloudPhotosEnabled;
+ (id)newRangeFromRange:(id)arg1 excludingRange:(id)arg2;
+ (id)printDerivativeSizes;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 containsRange2:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)rangeConformingToVoiceRangesSurroundingTime:(int)arg1 forDuration:(int)arg2 inRanges:(id)arg3;
+ (id)rangeIn:(id)arg1 correspondingToRange:(id)arg2;
+ (id)rangeModels:(id)arg1 deletingFastMotionRangesFrom:(id)arg2 blueprint:(id)arg3 frameRate:(int)arg4;
+ (id)rangeModels:(id)arg1 deletingLowQualityRangesFrom:(id)arg2 blueprint:(id)arg3 frameRate:(int)arg4;
+ (id)rangeModelsByDeletingRangeModels:(id)arg1 outsideClip:(id)arg2 projectFrameRate:(int)arg3;
+ (id)rangeModelsBySplittingRangeModels:(id)arg1 outsideRange:(id)arg2;
+ (id)rangeSurroundingTime:(int)arg1 inRanges:(id)arg2;
+ (void)updateAssets:(id)arg1 forFeaturedPeople:(id)arg2;
+ (void)updateAssets:(id)arg1 forPreferredClassificationKeys:(id)arg2;

- (void)CHECK_RANGES:(id)arg1;
- (id)_intersectSplitAndCollectRanges:(id)arg1;
- (id)_intersectSplitAndCollectRangesInAWayThatDoesntWork:(id)arg1;
- (int)_minimumUsefulResourceHeight;
- (int)_minimumUsefulResourceWidth;
- (double)_miro_analysisRelatedScore:(id)arg1 reasonString:(id)arg2;
- (double)_miro_camMotionScore:(id)arg1;
- (double)_miro_faceScore:(id)arg1;
- (bool)_miro_ignoreDoNotUseScore;
- (double)_miro_junkScore:(id)arg1;
- (double)_miro_nonAnalysisRelatedScore:(id)arg1 reasonString:(id)arg2;
- (double)_miro_normalizedScoreForRawScore:(double)arg1;
- (double)_miro_qualityScore:(id)arg1;
- (double)_miro_voiceScore:(id)arg1;
- (id)_mostUsefulResourceForExport:(bool)arg1;
- (id)_newRangeBySplittingRange:(id)arg1 atTime:(int)arg2;
- (id)_ranges:(id)arg1 mergedAsChildRangesWhereOverlapingRanges:(id)arg2;
- (int)_requestAVAssetWithOptions:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)adjustedRepresentation;
- (id)adjustmentData;
- (id)allUsefulMetadataRanges;
- (void)arbitrarilySegmentLongUnanalyzedRanges:(id)arg1;
- (id)assetResourceForIrisIfNeeded;
- (id)avAssetWithOptions:(id)arg1;
- (id)avPlayerItemWithOptions:(id)arg1;
- (double)badQualityThreshold;
- (id)bestRangeFromRanges:(id)arg1 requestedDuration:(int)arg2;
- (bool)burstIsValid;
- (void)cancelImageRequestWithID:(int)arg1;
- (id)defaultRepresentation;
- (int)downloadResource:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3 dataHandler:(id /* block */)arg4;
- (double)durationWeightedValue:(double)arg1;
- (bool)hasLocallyAvailableUsefulResource;
- (id)imageForTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3;
- (bool)irisVideoMeetsActionRequirements;
- (bool)irisVideoMeetsQualityRequirements;
- (bool)isSloMoAsset;
- (id)largeIfLocal_elseFullIfLocal_elseOriginalIfNotEditedAndLocal_elseMedium;
- (id)localIdentifierURL;
- (double)maximumDurationInSecondsJunkAndUserTrim;
- (id)miro_IrisUsableRange;
- (bool)miro_IrisVideoUsable;
- (double)miro_IrisVideoUsableDuration;
- (id)miro_allRanges;
- (long long)miro_analysisVersion;
- (id)miro_cachedLocalMostUsefulResource;
- (double)miro_computeStaticScoreWithScoreReasonString:(id*)arg1;
- (double)miro_computeStaticScoreWithScoreReasonString:(id*)arg1 scoreLog:(id*)arg2 writeToFile:(bool)arg3 ignoreSetting:(bool)arg4;
- (void)miro_deleteRangesWithType:(unsigned long long)arg1;
- (id)miro_desirableRanges;
- (unsigned long long)miro_faceCount;
- (unsigned long long)miro_flags;
- (id)miro_ingestServerSideAnalysisResults:(bool*)arg1;
- (bool)miro_irisDoesNotContainFlash;
- (bool)miro_irisMeetsFacesRequirements;
- (bool)miro_isBlacklisted;
- (bool)miro_isJunk;
- (double)miro_junkValue;
- (bool)miro_originalVideoKnownToBeBad;
- (unsigned long long)miro_performedAnalysisTypes;
- (id)miro_rangesWithType:(unsigned long long)arg1;
- (id)miro_rangesWithType:(unsigned long long)arg1 predicate:(id)arg2;
- (id)miro_rangesWithType:(unsigned long long)arg1 predicate:(id)arg2;
- (double)miro_rawQualityScore;
- (double)miro_score;
- (double)miro_scoreLogForDebugDisplayWithScoreReasonString:(id*)arg1 scoreLog:(id*)arg2;
- (void)miro_setRanges:(id)arg1 replaceType:(unsigned long long)arg2;
- (id)miro_transientRangesWithType:(unsigned long long)arg1;
- (unsigned long long)miro_voiceCount;
- (bool)mirobackend_isGIF;
- (bool)mirobackend_isScreenshotOrPNG;
- (bool)modifyForBadIrisSharpness;
- (id)mostUsefulResource;
- (id)mostUsefulResourceForExport;
- (id)newAutoEditRanges;
- (id)newAutoEditRangesConstrainedToClip:(id)arg1;
- (int)numberOfNeededRangesForDuration:(double)arg1;
- (id)originalRepresentation;
- (id)pickListRanges;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)preferredRepresentation;
- (double)qualityValueForAnalysisValue:(double)arg1;
- (id)rangesByTrimmingToBounds:(id)arg1 selectionStart:(int)arg2 duration:(int)arg3;
- (int)requestAVAssetWithOptions:(id)arg1 resultHandler:(id /* block */)arg2;
- (int)requestExportSessionWithOptions:(id)arg1 exportPreset:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
- (int)requestPlayerItemWithOptions:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)sceneRangesRemovingLowQualityRanges;
- (id)sceneRangesSplitByLowQualityAndVPScenes;
- (float)scoreForAutoEditRange:(id)arg1 resultChildVoiceRange:(id*)arg2;
- (void)scoreInterestingSubranges:(id)arg1;
- (void)scoreRanges:(id)arg1 scoreForDuration:(bool)arg2;
- (void)setMiro_cachedLocalMostUsefulResource:(id)arg1;
- (void)setMiro_desirableRanges:(id)arg1;
- (id)simplerSceneRangesRemovingLowQualityRanges;
- (id)userSetSloMoRange;

// Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion

+ (void)_nptoArchiveLivePhotoWithDictionary:(id)arg1 toURL:(id)arg2 completionHandler:(id /* block */)arg3;

- (void)_nptoExportLivePhotoToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_nptoExportPairedVideoToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_nptoExportPhotoDataWithCompletionHandler:(id /* block */)arg1;
- (void)_nptoExportPhotoToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchIrisForWatchToPath:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchJPEGForWatchWithCompletion:(id /* block */)arg1;
- (void)nptoExportWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)_personsByUUIDsForFetchedAssets:(id)arg1 orFetchResult:(id)arg2;
+ (void)_populateAsset:(id)arg1 withPersonsByUUIDs:(id)arg2;
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchOptions:(unsigned long long)arg2;
+ (float)clsSharpnessScoreThresholdToNotBeBlurry;
+ (id)contextForItems:(id)arg1;
+ (bool)isUtilityForAsset:(id)arg1;
+ (double)scoreForAsset:(id)arg1 withContext:(id)arg2;

- (id)_256SpecificAssetResource;
- (long long)_clsBlinkCount:(bool)arg1;
- (void)_clsSetActivityLevel:(float)arg1;
- (void)_clsSetSharpnessScore:(float)arg1;
- (void)_clsSetVideoFaceCount:(unsigned long long)arg1;
- (void)_clsSetVideoScore:(float)arg1;
- (float)_clsSharpnessScore:(bool)arg1;
- (long long)_clsSmileCount:(bool)arg1;
- (float)_clsUnprefetchedActivityLevel;
- (float)_clsUnprefetchedSharpnessScore:(bool)arg1;
- (unsigned long long)_clsUnprefetchedVideoFaceCount;
- (float)_clsUnprefetchedVideoScore;
- (void)_fetchMediaAnalysisType:(unsigned long long)arg1 forceProcessing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_imageDataForAssetResource:(id)arg1 networkAccessAllowed:(bool)arg2 error:(id*)arg3;
- (float)clsActivityLevel;
- (long long)clsBlinkCount;
- (double)clsContentScore;
- (id)clsDate;
- (id)clsDistanceIdentity;
- (float)clsExposureScore;
- (bool)clsFaceInformationArePrefetched;
- (bool)clsIsHDR;
- (bool)clsIsSDOF;
- (id)clsLocation;
- (bool)clsMediaAnalysisIsPrefetched;
- (unsigned long long)clsPeopleCount;
- (bool)clsPeopleCountIsPrefetched;
- (id)clsPeopleNames;
- (bool)clsPeopleNamesArePrefetched;
- (long long)clsPlayCount;
- (id)clsSceneClassifications;
- (bool)clsSceneClassificationsArePrefetched;
- (void)clsSetBlinkCount:(id)arg1;
- (void)clsSetExposureScore:(float)arg1;
- (void)clsSetPeopleCount:(id)arg1;
- (void)clsSetPeopleNames:(id)arg1;
- (void)clsSetSceneClassifications:(id)arg1;
- (void)clsSetSmileCount:(id)arg1;
- (long long)clsShareCount;
- (float)clsSharpnessScore;
- (long long)clsSmileCount;
- (id)clsUnprefetchedPeopleNames;
- (id)clsUnprefetchedSceneClassifications;
- (unsigned long long)clsVideoFaceCount;
- (float)clsVideoScore;
- (long long)clsViewCount;
- (struct CGImage { }*)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(bool)arg2 networkAllowed:(bool)arg3;
- (id)date;
- (id)dateComponents;
- (unsigned long long)facesCount;
- (bool)hasSharpnessScore;
- (bool)isBlurry;
- (bool)isBlurryForcingAnalysisIfNeeded;
- (bool)isScreenshot;
- (bool)isSubtype:(unsigned long long)arg1;
- (bool)isUtility;
- (id)localDate;
- (id)peopleNames;
- (double)scoreWithContext:(id)arg1;
- (id)universalDate;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (id)_matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2;
- (id)clsDistanceIdentity;
- (void)pha_enumerateMatchingScenesForLongExposureUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_fetchAssetsInArray:(id)arg1;
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)px_orderedAssetsFromAssets:(id)arg1 sortDescriptors:(id)arg2;

- (void)_px_adjustRectWithFaces:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 verticalContentMode:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (long long)isContentEqualTo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 shouldUseFacesRect:(bool)arg3;
- (long long)px_currentVariationType;
- (bool)px_isConfidentialAdjustmentsVersion:(id)arg1;
- (bool)px_isRecommendationSeenForVariationType:(long long)arg1;
- (bool)px_isSupportedApp:(id)arg1;
- (bool)px_isVariationTypeRecommended:(long long)arg1;
- (id)px_mailingAddressIncludeZipCode:(bool)arg1;
- (id)px_postalAddressIncludeZipCode:(bool)arg1;
- (id)px_singleLineMailingAddressIncludeZipCode:(bool)arg1;
- (bool)requiresConfidentiality;
- (struct CGSize { double x1; double x2; })size;
- (double)weight;

// Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit

- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_defaultFetchOptions;
+ (id)vcp_fetchAssetsMatchingFingerprint:(id)arg1;
+ (bool)vcp_usePHFace;
+ (bool)vcp_usePHFaceExpression;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vcp_faceRectFrom:(id)arg1;
- (id)vcp_fingerprint:(id)arg1;
- (unsigned long long)vcp_flagsForPHFace:(id)arg1 withFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)vcp_getAdjustmentPath;
- (bool)vcp_isLivePhoto;
- (bool)vcp_isPano;
- (bool)vcp_isSdofPhoto;
- (bool)vcp_isShortMovie;
- (bool)vcp_isVideoSlowmo;
- (bool)vcp_isVideoTimelapse;
- (id)vcp_modificationDate;
- (struct CGSize { double x1; double x2; })vcp_originalSize;
- (int)vcp_queryPHFaces:(unsigned long long*)arg1 results:(id*)arg2;
- (id)vcp_typeDescription;

@end