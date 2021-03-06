//
//  DataSource.h
//  ScoreKeeper
//
//  Created by sombra on 2015-02-06.
//  Copyright (c) 2015 sombra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataSource : NSObject <UITableViewDataSource>

- (void)registerTableView:(UITableView *)tableView;
- (void)registerNib:(UITableView *)tableView;
- (NSIndexPath *)addNewCell:(UITableView *)tableView;

@end
