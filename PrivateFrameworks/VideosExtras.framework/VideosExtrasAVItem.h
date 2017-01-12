/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasAVItem : MPStoreAVItem <AVAssetResourceLoaderDelegate> {
    IKAssetElement * _assetElement;
    BOOL  _background;
    BOOL  _loadedHLS;
    unsigned int  _mediaType;
}

@property (nonatomic, readonly) IKAssetElement *assetElement;
@property (getter=isBackground, nonatomic, readonly) BOOL background;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int mediaType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_expectedPlaybackMode;
- (void)_networkSettingsChanged:(id)arg1;
- (id)assetElement;
- (void)dealloc;
- (id)initWithAssetElement:(id)arg1 mediaType:(unsigned int)arg2 isBackground:(BOOL)arg3;
- (BOOL)isAssetURLValid;
- (BOOL)isBackground;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (unsigned int)mediaType;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setPlaybackStoppedTime:(double)arg1;
- (unsigned int)streamType;
- (int)type;

@end