/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CALayerArray, NSString, CALayer, NSDictionary;

@interface CALayer : NSObject <NSCoding, CAMediaTiming, CAPropertyInfo> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int flags; 
        unsigned long long parent; 
        CALayerArray *sublayers; 
        CALayer *mask; 
        struct _CALayerState {} *state; 
        struct _CALayerState {} *previous_state; 
        struct _CALayerAnimation {} *animations; 
        unsigned long long slots[3]; 
        unsigned int reserved; 
    } _attr;
}

@property(copy) NSArray * constraints;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property BOOL clearsContext;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentsTransform;
@property BOOL sortsSublayers;
@property(getter=isFloating) BOOL floating;
@property struct CGSize { double width; double height; } sizeRequisition;
@property(copy) NSString * wrappedDirection;
@property(copy) NSString * wrappedOrigin;
@property unsigned int tableRow;
@property unsigned int tableColumn;
@property unsigned int tableRows;
@property unsigned int tableColumns;
@property struct CGSize { double width; double height; } margin;
@property struct CGSize { double width; double height; } spacing;
@property unsigned int layoutFlags;
@property(readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGPoint { double x; double y; } position;
@property double zPosition;
@property struct CGPoint { double x; double y; } anchorPoint;
@property double anchorPointZ;
@property struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } sublayerTransform;
@property(retain) CALayer * mask;
@property BOOL masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property(copy) NSString * contentsGravity;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property unsigned int edgeAntialiasingMask;
@property struct CGColor { }* backgroundColor;
@property double cornerRadius;
@property double borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { double width; double height; } shadowOffset;
@property double shadowRadius;
@property unsigned int autoresizingMask;
@property(retain) id layoutManager;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property(copy) NSString * fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double duration;
@property double beginTime;

+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)layer;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)properties;
+ (int (*)())CA_setterForType:(int)arg1;
+ (int (*)())CA_getterForType:(int)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)attributesForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (void)CAMLParserEndElement:(id)arg1;

- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayer:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)debugDescription;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })position;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isGeometryFlipped;
- (void)setGeometryFlipped:(BOOL)arg1;
- (BOOL)contentsAreFlipped;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (BOOL)isOpaque;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (unsigned int)edgeAntialiasingMask;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (id)contentsGravity;
- (void)setContentsGravity:(id)arg1;
- (BOOL)masksToBounds;
- (void)setMasksToBounds:(BOOL)arg1;
- (id)sublayers;
- (void)setSublayers:(id)arg1;
- (id)superlayer;
- (id)mask;
- (void)setMask:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)removeFromSuperlayer;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (BOOL)_scheduleAnimationTimer;
- (void)_cancelAnimationTimer;
- (id)presentationLayer;
- (id)modelLayer;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)needsDisplay;
- (void)displayIfNeeded;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)display;
- (void)_display;
- (void)_colorspaceDidChange;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setNeedsLayout;
- (BOOL)needsLayout;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (void)layoutIfNeeded;
- (void)layoutSublayers;
- (unsigned int)autoresizingMask;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)resizeSublayersWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x1; double x2; })arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (float)speed;
- (void)setSpeed:(float)arg1;
- (float)repeatCount;
- (void)setRepeatCount:(float)arg1;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (BOOL)autoreverses;
- (void)setAutoreverses:(BOOL)arg1;
- (id)fillMode;
- (void)setFillMode:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)anchorPointZ;
- (void)setAnchorPointZ:(double)arg1;
- (double)zPosition;
- (void)setZPosition:(double)arg1;
- (BOOL)isDoubleSided;
- (void)setDoubleSided:(BOOL)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })sublayerTransform;
- (void)setSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)magnificationFilter;
- (void)setMagnificationFilter:(id)arg1;
- (id)minificationFilter;
- (void)setMinificationFilter:(id)arg1;
- (float)minificationFilterBias;
- (void)setMinificationFilterBias:(float)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (struct CGColor { }*)backgroundColor;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)backgroundFilters;
- (void)setBackgroundFilters:(id)arg1;
- (id)compositingFilter;
- (void)setCompositingFilter:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (struct CGColor { }*)borderColor;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (float)shadowOpacity;
- (void)setShadowOpacity:(float)arg1;
- (struct CGColor { }*)shadowColor;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)arg1;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (void)_scrollPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)reloadValueForKeyPath:(id)arg1;
- (BOOL)needsLayoutOnGeometryChange;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (BOOL)canDrawConcurrently;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (BOOL)_canDisplayConcurrently;
- (BOOL)drawsMipmapLevels;
- (BOOL)hasBeenCommitted;
- (BOOL)clearsContext;
- (void)setClearsContext:(BOOL)arg1;
- (BOOL)sortsSublayers;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)invalidateContents;
- (void)setContentsChanged;
- (void*)regionBeingDrawn;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (BOOL)layoutIsActive;
- (void)layoutBelowIfNeeded;
- (BOOL)ignoresHitTesting;
- (BOOL)isDescendantOf:(id)arg1;
- (id)ancestorSharedWithLayer:(id)arg1;
- (id)sublayerEnumerator;
- (struct CGSize { double x1; double x2; })size;
- (id)layerBeingDrawn;
- (id)layerAtTime:(double)arg1;
- (id)attributesForKeyPath:(id)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct LayerExt {} *x4; struct Handle {} *x5; struct Object {} *x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct TypedArray<CA::Render::Layer> {} *x9; struct TypedArray<CA::Render::Animation> {} *x10; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; unsigned int x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct List<const void*> {} *x8; struct Deleted {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; }*)arg1 flags:(unsigned int*)arg2;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; unsigned int x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct List<const void*> {} *x8; struct Deleted {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; }*)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (BOOL)hidden;
- (BOOL)opaque;
- (BOOL)doubleSided;
- (BOOL)floating;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (void)setContentsTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (BOOL)isFloating;
- (void)setFloating:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeRequisition;
- (void)setSizeRequisition:(struct CGSize { double x1; double x2; })arg1;
- (void)addConstraint:(id)arg1;
- (id)_view;
- (void)_setView:(id)arg1;

@end
