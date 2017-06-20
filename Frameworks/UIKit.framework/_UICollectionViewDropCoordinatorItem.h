/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewDropCoordinatorItem : NSObject {
    UIView * _containerView;
    NSIndexPath * _destinationIndexPath;
    UIDragItem * _dragItem;
    int  _kind;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    bool  _shouldRemainInHierarchy;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) UIView *containerView;
@property (nonatomic, retain) NSIndexPath *destinationIndexPath;
@property (nonatomic) UIDragItem *dragItem;
@property (nonatomic) int kind;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) bool shouldRemainInHierarchy;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (void).cxx_destruct;
- (id)containerView;
- (id)description;
- (id)destinationIndexPath;
- (id)dragItem;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 inContainerView:(id)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 dragItem:(id)arg4;
- (int)kind;
- (struct CGPoint { double x1; double x2; })location;
- (void)setContainerView:(id)arg1;
- (void)setDestinationIndexPath:(id)arg1;
- (void)setDragItem:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldRemainInHierarchy:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)shouldRemainInHierarchy;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end