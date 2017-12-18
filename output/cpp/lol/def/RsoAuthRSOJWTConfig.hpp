#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthRSOJWTConfig { 
    std::optional<std::string> token; 
  };
  inline void to_json(json& j, const RsoAuthRSOJWTConfig& v) {
    if(v.token)
      j["token"] = *v.token;
  }
  inline void from_json(const json& j, RsoAuthRSOJWTConfig& v) {
    if(auto it = j.find("token"); it != j.end() && !it->is_null())
      v.token = it->get<std::optional<std::string>>(); 
  }
}