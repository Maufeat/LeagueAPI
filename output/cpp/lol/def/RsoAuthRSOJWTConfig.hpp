#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthRSOJWTConfig { 
    std::optional<std::string> token; 
  };
  void to_json(json& j, const RsoAuthRSOJWTConfig& v) {
  j["token"] = v.token; 
  }
  void from_json(const json& j, RsoAuthRSOJWTConfig& v) {
  v.token = j.at("token").get<std::optional<std::string>>(); 
  }
}