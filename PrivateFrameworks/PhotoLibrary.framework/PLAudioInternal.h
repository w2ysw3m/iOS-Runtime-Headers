/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, NSURL, PLVideoFileGroup;

@interface PLAudioInternal : MLPhoto {
    NSString *_temporaryPath;
    NSString *_title;
    NSURL *_url;
    PLVideoFileGroup *_videoFileGroup;
}

- (void)dealloc;
- (id)fileGroup;
- (BOOL)isAudio;
- (BOOL)isVideo;
- (id)title;

@end