/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {
    EKCalendarChooser * _chooser;
    unsigned int  _entityType;
    BOOL  _limitToSource;
    EKCalendar * _selectedCalendar;
    EKEventStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL limitToSource;
@property (nonatomic, retain) EKCalendar *selectedCalendar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2 styleProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned int)arg4;
- (BOOL)limitToSource;
- (void)loadView;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (id)selectedCalendar;
- (void)setLimitToSource:(BOOL)arg1;
- (void)setSelectedCalendar:(id)arg1;

@end
