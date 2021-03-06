#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthUserInfo { 
    std::string userInfo; 
  };
  inline void to_json(json& j, const RsoAuthUserInfo& v) {
    j["userInfo"] = v.userInfo; 
  }
  inline void from_json(const json& j, RsoAuthUserInfo& v) {
    v.userInfo = j.at("userInfo").get<std::string>(); 
  }
}