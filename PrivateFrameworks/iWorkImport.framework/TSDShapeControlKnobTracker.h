/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CAShapeLayer;

@interface TSDShapeControlKnobTracker : TSDKnobTracker <TSDDecorator> {
    CAShapeLayer *mGuideLayer;
}

- (void)beginMovingKnob;
- (void)dealloc;
- (id)decoratorOverlayLayers;
- (void)endMovingKnob;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (void)moveKnobToRepPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_hideGuideLayer;
- (void)p_hideHUD;
- (void)p_updateGuideLayer;
- (void)p_updateHUDAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)shapeControlLayout;
- (id)shapeControlRep;

@end
