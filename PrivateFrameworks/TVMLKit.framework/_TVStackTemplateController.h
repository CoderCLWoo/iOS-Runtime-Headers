/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackTemplateController : _TVStackCommonTemplateController {
    NSIndexPath * _lastFocusedIndexPath;
    BOOL  _needsMoreContent;
    NSArray * _stackRows;
    NSArray * _stackSections;
    NSArray * _viewControllers;
}

- (void).cxx_destruct;
- (void)_adjustedContentOffsetForRowIndex:(int)arg1 targetContentOffset:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)_buildStackSections;
- (void)_evaluateNeedsMoreContent;
- (float)_maxViewWidth;
- (void)_updateFirstItemRowIndexes;
- (BOOL)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionListMargin;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)updateCollectionViewControllers;
- (id)viewControllers;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end