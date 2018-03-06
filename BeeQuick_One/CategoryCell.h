#import <UIKit/UIKit.h>
#import "SuperMarketSource.h"
@interface CategoryCell : UITableViewCell

+ (instancetype)cellWithTable:(UITableView *)tableView;

@property (nonatomic,strong)ProductCategory *categroies;
@end
