//
//  homeTableViewCell.h
//  XiongDaJinFu
//
//  Created by gary on 2016/12/7.
//  Copyright © 2016年 digirun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface homeTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIView *fullView;

+ (instancetype)homeTableViewCellWithTableView:(UITableView *)tableView;
@end
