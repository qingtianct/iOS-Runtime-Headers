/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRMonogramView : UIView <UITextFieldDelegate> {
    BOOL  _allowsEditing;
    BOOL  _bordered;
    CAGradientLayer * _circleGradientLayer;
    BOOL  _circular;
    BOOL  _highlighted;
    PRMonogram * _monogram;
    BOOL  _selected;
    UITextField * _textField;
}

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL bordered;
@property (getter=isCircular, nonatomic) BOOL circular;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, retain) PRMonogram *monogram;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCornerRadii;
- (void)_updateTextLabel;
- (BOOL)allowsEditing;
- (BOOL)bordered;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCircular;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (id)monogram;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setCircular:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMonogram:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldResignFirstResponder;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
