//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;

@interface TGLStackedLayout : UICollectionViewLayout
{
    _Bool _movingItemOnTop;
    _Bool _fillHeight;
    _Bool _centerSingleItem;
    _Bool _alwaysBounce;
    _Bool _overwriteContentOffset;
    _Bool _filling;
    double _topReveal;
    double _bounceFactor;
    double _movingItemScaleFactor;
    NSDictionary *_layoutAttributes;
    struct CGSize _itemSize;
    struct CGPoint _contentOffset;
    struct UIEdgeInsets _layoutMargin;
}

@property(nonatomic) _Bool filling; // @synthesize filling=_filling;
@property(retain, nonatomic) NSDictionary *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) _Bool overwriteContentOffset; // @synthesize overwriteContentOffset=_overwriteContentOffset;
@property(nonatomic, getter=isAlwaysBouncing) _Bool alwaysBounce; // @synthesize alwaysBounce=_alwaysBounce;
@property(nonatomic, getter=isCenteringSingleItem) _Bool centerSingleItem; // @synthesize centerSingleItem=_centerSingleItem;
@property(nonatomic, getter=isFillingHeight) _Bool fillHeight; // @synthesize fillHeight=_fillHeight;
@property(nonatomic) _Bool movingItemOnTop; // @synthesize movingItemOnTop=_movingItemOnTop;
@property(nonatomic) double movingItemScaleFactor; // @synthesize movingItemScaleFactor=_movingItemScaleFactor;
@property(nonatomic) double bounceFactor; // @synthesize bounceFactor=_bounceFactor;
@property(nonatomic) double topReveal; // @synthesize topReveal=_topReveal;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct UIEdgeInsets layoutMargin; // @synthesize layoutMargin=_layoutMargin;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)initLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

