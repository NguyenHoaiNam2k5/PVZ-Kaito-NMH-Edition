# Beacon Books

# Giới thiệu phần mềm
Beacon Books là một phần mềm quản lý thư viện đa dụng, thân thiện với người dùng. Phần mềm được thiết kế để hỗ trợ việc tổ chức, quản lý và vận hành các thư viện; hơn thế nữa, Beacon Books cũng giúp đỡ người dùng mượn, trả sách dễ dàng và nhanh chóng hơn.
- [0. Sign in/Sign up](#0-sign-in-sign-up)
- [1. Giao diện admin](#1-giao-diện-admin)
- [2. Giao diện reader](#2-giao-diện-reader)
- [Về source code](#về-source-code)

# 0. Sign in/ Sign up

![Screenshot 2024-12-01 095927](https://github.com/user-attachments/assets/3f6ce940-542b-4346-9083-33f5b37a2f0f)

## a. Sign in

![Screenshot 2024-12-02 143007](https://github.com/user-attachments/assets/0d5c4fb8-60c9-4108-b27e-be8130a00b44)

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
![Screenshot 2024-12-02 143547](https://github.com/user-attachments/assets/936b4b66-a92a-4d81-9b3d-2b39a73b6d77)

- Có 3 chế độ search: Fuzzy search, Contains search, Exact search.
- Có thể search theo các tiêu chí: title, author, publish year.

## b. DASHBOARD
![Screenshot 2024-12-02 143245](https://github.com/user-attachments/assets/54f73a9e-3114-402d-8a23-e5d508807f00)

Thống kê các số liệu về Document của toàn thư viện.
## c. RESOURCE

![Screenshot 2024-12-02 144108](https://github.com/user-attachments/assets/749bd0d5-8d2a-4822-9db6-31fa6b2a3da6)


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

![Screenshot 2024-12-02 144428](https://github.com/user-attachments/assets/6be5d591-2383-4629-8a60-95c426093318)

- Có 2 cách thêm dữ liệu: 
  + Nhập các trường dữ liệu và nhấn "ADD" để thêm Document.
  + Nhập ISBN và sử dụng Google API để lấy các dữ liệu về Document sau đó "ADD".

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
Tương tự như Admin
## c. RESOURCE

![Screenshot 2024-12-02 145018](https://github.com/user-attachments/assets/c0aab1ad-2e32-49a7-bde1-451d0d9c85ff)


- Reader vẫn có thể filter; xem Description, thông tin chi tiết; viết và xem các comment, đánh giá như Admin.
- Reader có thể mượn tài liệu theo các thời hạn đăng kí trước: 7 days, 14 days, 21 days
  ![Screenshot 2024-12-01 175631](https://github.com/user-attachments/assets/be2cec8d-027b-437d-b04a-426407decf69)
## d. MY READ DOCS
- Hiển thị những tài liệu mà reader đã mượn.



- Người dùng có thể bấm vào tài liệu để xem thông tin chi tiết và tiến hành trả sách
  ![Screenshot 2024-12-01 175721](https://github.com/user-attachments/assets/8d322a92-8e76-434e-9192-1708ab497cdf)
# Về source code:
## Package configs
Class DatabaseConfig dùng để thiết lập kết nối cơ sở dữ liệu cho ứng dụng. Nó sử dụng HikariCP để quản lý kết nối cơ sở dữ liệu một cách hiệu quả và cung cấp các beans để thực hiện các thao tác với cơ sở dữ liệu.
## Package controllers
![Screenshot 2024-12-02 134604](https://github.com/user-attachments/assets/46000648-57b5-4bf2-b9ce-a513af223971)

## Package core
Class Library là một singleton cốt lõi phục vụ cho hệ thống quản lý thư viện với các chức năng:
- Quản lý tài liệu: addDocument, updateDocument, deleteDocument.
- Quản lý bình luận: addComment, deletaComment.
- Quản lý người dùng: updatePassword, updateUserInfomation, deleteUser, authenticateUser.
- Hệ thống mượn trả sách: lendDocument, retrieveDocument.
## Package documents
Quản lý các đối tượng documents và các đối tượng liên quan: author và comment.
- Class Author: Quản lý các đối tượng author.
- Class Comment: Quản lý các đối tượng comment.
- Class Document: Quản lý chung các đối tượng document.
- Class Book: Kế thừa từ class Document, quản lý các đối tượng Book, lấy Book từ Google API qua hàm "fetchBookInfoFromGoogle".
- Class Thesis: Kế thừa từ class Document, quản lý các đối tượng Thesis.
- Class BorrowedDocument: Quản lý các document đang được mượn.
- Class DocumentBuilder: Là một abstract class phục vụ cho Builder design pattern.
- Class BookBuilder: Kế thừa từ class DocumentBuilder, là builder cho các đối tượng Book.
- Class ThesisBuilder: Kế thừa từ class DocumentBuilder, là builder cho các đối tượng Thesis.
## Package exceptions
![Screenshot 2024-12-02 134713](https://github.com/user-attachments/assets/95ee34e3-f8ea-476b-9837-a974159f8a22)

## Package repositories
Tạo các truy vấn và lấy dữ liệu từ database.
## Package services
- Class JdbcDocumentService: Chứa các hàm để sửa các dữ liệu của Document.
- Class JdbcUserService: Chứa các hàm để sửa các dữ liệu của User.
## Package search
Chứa các hàm để thực hiện chức năng tìm kiếm Document.
## Package tests
Chứa các file JUnit Test để test các phương thức trong các class Account, Author, Book, BorrowedDocument, StringMatcher.
## Package users
- Class Account: Quản lý tài khoản của các User.
- Class User: Là một abstract class, quản lý chung các đối tượng User (Admin và Reader).
- Class Reader: Kế thừa từ class User, quản lý các đối tượng Reader.
- Class Administrator: Kế thừa từ class User, quản lý các đối tượng Admin.
- Class UserBuilder: Là một abstract class phục vụ cho Builder design pattern.
- Class ReaderBuilder: Kế thừa từ class UserBuilder, là builder cho các đối tượng Reader.
- Class AdministratorBuilder: Kế thừa từ class UserBuilder, là builder cho các đối tượng Admin.


