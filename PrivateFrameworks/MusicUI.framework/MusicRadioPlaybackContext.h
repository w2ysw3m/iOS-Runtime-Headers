/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPAVItem, RadioStation;

@interface MusicRadioPlaybackContext : MusicPlaybackContext {
    unsigned int _initialTrackIndex;
    MPAVItem *_prefixItem;
    RadioStation *_station;
}

@property unsigned int initialTrackIndex;
@property(retain) MPAVItem * prefixItem;
@property(readonly) RadioStation * station;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (id)initWithStation:(id)arg1;
- (unsigned int)initialTrackIndex;
- (int)playbackMode;
- (id)prefixItem;
- (void)setInitialTrackIndex:(unsigned int)arg1;
- (void)setPrefixItem:(id)arg1;
- (id)station;

@end
