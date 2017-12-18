#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderUrlResource { 
    std::string url; 
  };
  inline void to_json(json& j, const RecofrienderUrlResource& v) {
    j["url"] = v.url; 
  }
  inline void from_json(const json& j, RecofrienderUrlResource& v) {
    v.url = j.at("url").get<std::string>(); 
  }
}