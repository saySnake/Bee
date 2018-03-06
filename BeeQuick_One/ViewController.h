
#import <UIKit/UIKit.h>

@protocol CategoryTableViewDelagate <NSObject>

- (void)didTableView:(UITableView *)tableView clickedAtIndexPath:(NSIndexPath*)indexPath;

@end

@interface ViewController : UIViewController

@property (nonatomic,weak) id<CategoryTableViewDelagate>delegate;
@end

