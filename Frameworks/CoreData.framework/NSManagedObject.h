/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObject : NSObject <NSFetchRequestResult> {
    unsigned int  _cd_extraFlags;
    void * _cd_extras;
    unsigned int  _cd_lockingInfo;
    NSManagedObjectContext * _cd_managedObjectContext;
    NSManagedObjectID * _cd_objectID;
    id  _cd_queueReference;
    id  _cd_rawData;
    int  _cd_rc;
    unsigned int  _cd_stateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (getter=isFault, nonatomic, readonly) bool fault;
@property (nonatomic, readonly) unsigned long long faultingState;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasPersistentChangedValues;
@property (readonly) unsigned long long hash;
@property (getter=isInserted, nonatomic, readonly) bool inserted;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (readonly) Class superclass;
@property (getter=isUpdated, nonatomic, readonly) bool updated;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (struct { int x1; void *x2; id x3; unsigned char x4; unsigned long long x5; void *x6; id x7; struct _moFactoryClassFlags { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 26; } x8; }*)_PFMOClassFactoryData;
+ (id)_PFPlaceHolderSingleton;
+ (id)_PFPlaceHolderSingleton_core;
+ (void)_entityDeallocated;
+ (bool)_hasOverriddenAwake;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (bool)_isGeneratedClass;
+ (bool)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (char *)_transientPropertiesChangesMask__;
+ (bool)_useFastValidationMethod;
+ (id)alloc;
+ (unsigned int)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)allocWithEntity:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (id)alloc_10_4;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;
+ (Class)classForEntity:(id)arg1;
+ (bool)contextShouldIgnoreUnmodeledPropertyChanges;
+ (id)entity;
+ (id)entityName;
+ (id)fetchRequest;
+ (void)initialize;
+ (void)release;
+ (bool)resolveClassMethod:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (id)retain;

- (id)_allProperties__;
- (int)_batch_release__;
- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;
- (bool)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (id)_changedTransientProperties__;
- (id)_changedValuesForCurrentEvent;
- (void)_clearAllChanges__;
- (void)_clearPendingChanges__;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_clearUnprocessedChanges__;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned long long)arg1 newValue:(id)arg2;
- (bool)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (id)_descriptionValues;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3;
- (id)_faultHandler__;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;
- (bool)_hasAnyObservers__;
- (bool)_hasPendingChanges;
- (bool)_hasRetainedStoreResources__;
- (bool)_hasUnprocessedChanges__;
- (id)_implicitObservationInfo;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (bool)_isDeallocating;
- (bool)_isKindOfEntity:(id)arg1;
- (bool)_isPendingDeletion__;
- (bool)_isPendingInsertion__;
- (bool)_isPendingUpdate__;
- (bool)_isSuppressingChangeNotifications__;
- (bool)_isSuppressingKVO__;
- (bool)_isUnprocessedDeletion__;
- (bool)_isUnprocessedInsertion__;
- (bool)_isUnprocessedUpdate__;
- (bool)_isValidRelationshipDestination__;
- (id)_lastSnapshot__;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned long long)arg3 onSet:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_newChangedValuesForRefresh__;
- (id)_newCommittedSnapshotValues;
- (id)_newNestedSaveChangedValuesForParent:(id)arg1;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_newPropertiesForRetainedTypes:(unsigned int*)arg1 andCopiedTypes:(unsigned int*)arg2 preserveFaults:(bool)arg3;
- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;
- (id)_newSnapshotForUndo__;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)_orderKeysForRelationshipWithName__:(id)arg1;
- (id)_originalSnapshot__;
- (id)_persistentProperties__;
- (void)_prepropagateDeleteForMerge;
- (void)_propagateDelete;
- (void)_propagateDelete:(unsigned int)arg1;
- (id)_referenceQueue__;
- (id)_reservedCurrentEventSnapshot;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4;
- (void)_setHasRetainedStoreResources__:(bool)arg1;
- (void)_setLastSnapshot__:(id)arg1;
- (void)_setObjectID__:(id)arg1;
- (void)_setOriginalSnapshot__:(id)arg1;
- (void)_setPendingDeletion__:(bool)arg1;
- (void)_setPendingInsertion__:(bool)arg1;
- (void)_setPendingUpdate__:(bool)arg1;
- (void)_setSuppressingChangeNotifications__:(bool)arg1;
- (void)_setSuppressingKVO__:(bool)arg1;
- (void)_setUnprocessedDeletion__:(bool)arg1;
- (void)_setUnprocessedInsertion__:(bool)arg1;
- (void)_setUnprocessedUpdate__:(bool)arg1;
- (void)_setVersionReference__:(unsigned int)arg1;
- (unsigned int)_stateFlags;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (id)_transientProperties__;
- (bool)_tryRetain;
- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(bool)arg2;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (bool)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (bool)_validateForSave:(id*)arg1;
- (bool)_validatePropertiesWithError:(id*)arg1;
- (bool)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned long long)arg4 error:(id*)arg5;
- (unsigned int)_versionReference__;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (id)changedValues;
- (id)changedValuesForCurrentEvent;
- (id)committedValuesForKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)didFireFault;
- (void)didRefresh:(bool)arg1;
- (void)didSave;
- (void)didTurnIntoFault;
- (void)diffOrderedSets:(id)arg1 :(id)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6 :(id*)arg7;
- (id)entity;
- (unsigned long long)faultingState;
- (bool)hasChanges;
- (bool)hasFaultForRelationshipNamed:(id)arg1;
- (bool)hasPersistentChangedValues;
- (unsigned long long)hash;
- (bool)implementsSelector:(SEL)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isFault;
- (bool)isInserted;
- (bool)isUpdated;
- (id)managedObjectContext;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)objectID;
- (id)objectIDsForRelationshipNamed:(id)arg1;
- (void*)observationInfo;
- (void)prepareForDeletion;
- (id)primitiveValueForKey:(id)arg1;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)validateForDelete:(id*)arg1;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (bool)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)wasForgotten;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)willFireFault;
- (void)willRefresh:(bool)arg1;
- (void)willSave;
- (void)willTurnIntoFault;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_obsoleteAttributes;
- (id)_removeObsoleteKeysFromDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithObject:(id)arg1;
- (bool)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2;

@end