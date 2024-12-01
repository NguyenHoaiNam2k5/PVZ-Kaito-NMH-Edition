# Beacon Books

# Giới thiệu phần mềm
Beacon Books là một phần mềm quản lý thư viện đa dụng, thân thiện với người dùng. Phần mềm được thiết kế để hỗ trợ việc tổ chức, quản lý và vận hành các thư viện; hơn thế nữa, Beacon Books cũng giúp đỡ người dùng mượn, trả sách dễ dàng và nhanh chóng hơn.
- [0. Sign in/Sign up](#0-sign-in-sign-up)
- [1. Giao diện admin](#1-giao-diện-admin)
- [2. Giao diện reader](#2-giao-diện-reader)
- [Về đồ họa của game:](#về-đồ-họa-của-game)
- [Về source code game](#về-source-code-game)

# 0. Sign in/ Sign up

![Screenshot 2024-12-01 095927](https://github.com/user-attachments/assets/3f6ce940-542b-4346-9083-33f5b37a2f0f)

## a. Sign in

![Screenshot 2024-12-01 162419](https://github.com/user-attachments/assets/1e2cc66f-ae9f-4764-bbbc-7c25aa957a39)

- Nếu bạn đã có tài khoản, hãy nhập username và password sau đó nhấn "Sign in"
- Nếu username và password đúng, bạn sẽ đăng nhập được vào Beacon Books.
- Nếu username và password chưa chính xác, hệ thống sẽ thông báo và bạn vui lòng kiểm tra lại username và password rồi tiến hành đăng nhập lại.
  ![Screenshot 2024-12-01 161846](https://github.com/user-attachments/assets/12a4e1ce-5878-44a3-bedb-de578efa2b93)


## b.Sign up
- Nếu bạn chưa có tài khoản, chọn "Sign up" để tạo tài khoản mới.
  ![Screenshot 2024-12-01 162736](https://github.com/user-attachments/assets/b7af070c-6bbe-4daf-b3cf-2e5810d89d8e)
- Nhập name, username và password bạn muốn.
- Nếu password bạn nhập có ít hơn 8 kí tự, hệ thống sẽ báo lỗi, bạn phải nhập lại 1 password có đủ 8 kí tự.
  ![Screenshot 2024-12-01 164026](https://github.com/user-attachments/assets/5eaffd2a-254b-420a-a6b4-ed95df0b9028)
- Nếu username bạn nhập đã được sử dụng, hệ thống cũng sẽ báo lỗi, bạn phải nhập lại 1 username khác.
![Screenshot 2024-12-01 164153](https://github.com/user-attachments/assets/4f172672-7f5f-4b9b-a79f-3fd59444b79e)
- Sau khi Sign up thành công, hệ thống sẽ đưa bạn quay lại giao diện ban đầu để Sign in.


# 1. Giao diện admin
## a. SEARCH
![Screenshot 2024-12-01 165812](https://github.com/user-attachments/assets/ebb2b669-56b2-4a09-90f2-cea8fd27cb3c)
- Có 3 tiêu chí để Search: Title, Authors, PublishYear.
- Bạn có thể chọn Search theo 1, 2 hoặc cả 3 tiêu chí.
## b. DASHBOARD
## c. RESOURCE


- Filter: Bạn có thể lọc tài liệu thông qua filter: Book / Thesis
  ![Screenshot 2024-12-01 171706](https://github.com/user-attachments/assets/a1909013-f1f1-499c-98a9-41d013db4ed3)
- Xem Description bằng cách bấm vào bìa sách
            ![Screenshot 2024-12-01 171843](https://github.com/user-attachments/assets/97a1f469-675e-4259-81f6-057937155842)
- Bấm vào tên cuốn sách để xem các thông tin chi tiết
  ![Screenshot 2024-12-01 172002](https://github.com/user-attachments/assets/a67c9bf6-afba-4647-afed-4700aff27247)
- Ngoài ra, bạn còn có thể sửa và xóa tài liệu nếu muốn
  ![Screenshot 2024-12-01 172123](https://github.com/user-attachments/assets/2dc1ab56-ad97-4b0f-82f7-a3d9e30c8b87)
- Bạn còn có thể đọc comment, đánh giá của mọi người về tài liệu đó và tự viết comment, đáng giá của chính mình.
  ![Screenshot 2024-12-01 172336](https://github.com/user-attachments/assets/9227f82a-540f-497e-b9d2-d2e03789b884)

## d. ADD DOCUMENT



## e. MANAGE USER

![Screenshot 2024-12-01 172631](https://github.com/user-attachments/assets/1bc7e9ef-9968-418c-a89b-0bcc1364b2fa)

- Filter: Bạn có thể lọc người dùng thông qua filter: Admin / Reader.
  ![Screenshot 2024-12-01 172752](https://github.com/user-attachments/assets/7201e842-1f29-4bfe-9219-200b9fa929ac)
- Add user: Bạn có thể thêm user bằng tài khoản admin (tài khoản admin chỉ có thể được tạo từ 1 tài khoản admin khác).
  ![Screenshot 2024-12-01 172918](https://github.com/user-attachments/assets/a0d6fced-b03c-4f81-b0e9-e9ddbb2ff72b)
- Xem thông tin của các user đã có: Admin có quyền xem thông tin về các user khác khi bấm vào tài khoản của họ trong danh sách user.
  ![Screenshot 2024-12-01 173433](https://github.com/user-attachments/assets/23c6e3d9-7244-4da5-958b-cdd0eb75e068)
# 2. Giao diện reader

## a. SEARCH
Tương tự như Admin
## b. DASHBOARD
## c. RESOURCE


- Reader vẫn có thể filter; xem Description, thông tin chi tiết; viết và xem các comment, đánh giá như Admin.
- Reader có thể mượn tài liệu theo các thời hạn đăng kí trước: 7 days, 14 days, 21 days
  ![Screenshot 2024-12-01 175631](https://github.com/user-attachments/assets/be2cec8d-027b-437d-b04a-426407decf69)
## d. MY READ DOCS
- Hiển thị những tài liệu mà reader đã mượn.



- Người dùng có thể bấm vào tài liệu để xem thông tin chi tiết và tiến hành trả sách
  ![Screenshot 2024-12-01 175721](https://github.com/user-attachments/assets/8d322a92-8e76-434e-9192-1708ab497cdf)
### Về source code game:

- Folder draw:
    * khởi tạo window và renderer
    * chứa tất cả các ảnh trong game (được đánh số)
    * chứa hầu hết các câu lệnh của SDL2, SDL2_image, SDL2_ttf, sử dụng để vẽ load ảnh, chữ và vẽ lên renderer, window.
- Folder elements: Chứa tất cả các thành phần của game:
    * bullets: các loại đạn
    * button: các loại nút trong game (có thể nhấn được hoặc không)
    * Map: chứa hàm random và khởi tạo bảng 5 x 9 cho màn chơi.
    * mower: máy cắt cỏ (Cán zombie)
    * plants: chứa tất cả các loại plant (được kế thừa từ class Plants)
    * zombies: chứa tất cả các loại zombies (được kế thừa từ class Zombie)
    * elements: gom lại các loại plants và zombies.
    * elements_actions:
        + chứa hầu hết các tương tác giữa các thành phần game với nhau, và với màn chơi.
        + tạo ngẫu nhiên zombie
        + cập nhật tất cả các thay đổi của game theo từng khung hình
- Folder events: Xử lý các sự kiện trong game (sự kiện chuột, bàn phím)
    * in_game: xử lý các sự kiện khi đang trong một màn chơi
        + credit: phần giới thiệu các loại zombie & ready-set-plant
        + game: tất cả các sự kiện trong một màn chơi
        + lose: xử lý khi thua
        + main_menu: xử lý khi người chơi muốn trở lại phần chọn màn chơi
        + pause_menu: xử lý khi người chơi dừng game (nút dừng hoặc click ra ngoài game)
        + restart_menu: xử lý khi người chơi muốn chơi lại màn chơi
        + turbo: xử lý nút tăng tốc game
        + volume: xử lý nút điều chỉnh âm lượng nhạc nền và hiệu ứng.
        + win: xử lý khi chiến thắng trò chơi.
    * mouse_cursor: xử lý con trỏ chuột
    * out_game: xử lý các sự kiện ngoài màn chơi
        + choose_level: xử lý chọn màn chơi
        + quit_menu: xử lý nút quit game: tắt game
        + reset_level: xử lý nút reset level: xóa tiến trình chơi
        + start_game: xử lý nút "Click to start" để bắt đầu vào game.
        + unlock_plant: xử lý mở khóa plant mới.
- Folder level: xử lý phần lấy dữ liệu ván chơi.
- Folder music: xử lý phần âm thanh của game - SDL2_mixer
- Folder player: xử lý phần dữ liệu người chơi. Bao gồm việc lấy và thay đổi tên, tiến trình.
- game_stats.hpp: chứa tất cả thông số game
- game.hpp và game.cpp: hàm main() của trò chơi.
