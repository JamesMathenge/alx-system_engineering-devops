#include <stdbool.h>
#include <string.h>

bool checkPassword(const char* password) {
	    // Define your password requirements here
	    //     const int min_length = 8;   // Minimum password length
	    //         const int max_length = 20;  // Maximum password length
	    //             const bool has_uppercase = true;   // Require at least one uppercase letter
	    //                 const bool has_lowercase = true;   // Require at least one lowercase letter
	    //                     const bool has_digit = true;       // Require at least one digit
	    //                         const bool has_special_char = true;  // Require at least one special character
	    //
	    //                             // Check password length
	    //                                 int password_length = strlen(password);
	    //                                     if (password_length < min_length || password_length > max_length) {
	    //                                             return false;
	    //                                                 }
	    //
	    //                                                     // Check for uppercase letter
	    //                                                         if (has_uppercase) {
	    //                                                                 bool has_upper = false;
	    //                                                                         for (int i = 0; i < password_length; i++) {
	    //                                                                                     if (password[i] >= 'A' && password[i] <= 'Z') {
	    //                                                                                                     has_upper = true;
	    //                                                                                                                     break;
	    //                                                                                                                                 }
	    //                                                                                                                                         }
	    //                                                                                                                                                 if (!has_upper) {
	    //                                                                                                                                                             return false;
	    //                                                                                                                                                                     }
	    //                                                                                                                                                                         }
	    //
	    //                                                                                                                                                                             // Check for lowercase letter
	    //                                                                                                                                                                                 if (has_lowercase) {
	    //                                                                                                                                                                                         bool has_lower = false;
	    //                                                                                                                                                                                                 for (int i = 0; i < password_length; i++) {
	    //                                                                                                                                                                                                             if (password[i] >= 'a' && password[i] <= 'z') {
	    //                                                                                                                                                                                                                             has_lower = true;
	    //                                                                                                                                                                                                                                             break;
	    //                                                                                                                                                                                                                                                         }
	    //                                                                                                                                                                                                                                                                 }
	    //                                                                                                                                                                                                                                                                         if (!has_lower) {
	    //                                                                                                                                                                                                                                                                                     return false;
	    //                                                                                                                                                                                                                                                                                             }
	    //                                                                                                                                                                                                                                                                                                 }
	    //
	    //                                                                                                                                                                                                                                                                                                     // Check for digit
	    //                                                                                                                                                                                                                                                                                                         if (has_digit) {
	    //                                                                                                                                                                                                                                                                                                                 bool has_digit_char = false;
	    //                                                                                                                                                                                                                                                                                                                         for (int i = 0; i < password_length; i++) {
	    //                                                                                                                                                                                                                                                                                                                                     if (password[i] >= '0' && password[i] <= '9') {
	    //                                                                                                                                                                                                                                                                                                                                                     has_digit_char = true;
	    //                                                                                                                                                                                                                                                                                                                                                                     break;
	    //                                                                                                                                                                                                                                                                                                                                                                                 }
	    //                                                                                                                                                                                                                                                                                                                                                                                         }
	    //                                                                                                                                                                                                                                                                                                                                                                                                 if (!has_digit_char) {
	    //                                                                                                                                                                                                                                                                                                                                                                                                             return false;
	    //                                                                                                                                                                                                                                                                                                                                                                                                                     }
	    //                                                                                                                                                                                                                                                                                                                                                                                                                         }
	    //
	    //                                                                                                                                                                                                                                                                                                                                                                                                                             // Check for special character
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                 if (has_special_char) {
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                         bool has_special = false;
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                 for (int i = 0; i < password_length; i++) {
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                             if (!(password[i] >= '0' && password[i] <= '9') &&
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                             !(password[i] >= 'A' && password[i] <= 'Z') &&
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             !(password[i] >= 'a' && password[i] <= 'z')) {
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             has_special = true;
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             break;
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 }
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         if (!has_special) {
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     return false;
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             }
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 }
	    //
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     // All checks passed, the password is valid
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         return true;
	    //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
	    //
