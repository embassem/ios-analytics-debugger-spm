//
//  EventsListScreenViewController.h
//  IosAnalyticsDebugger
//
//  Copyright © 2019. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class DebuggerEventItem;
@interface EventsListScreenViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

- (void) setExpendedStatus:(BOOL) expended forEvent:(DebuggerEventItem *) event;

+ (instancetype)eventsListViewController;
@end

NS_ASSUME_NONNULL_END
