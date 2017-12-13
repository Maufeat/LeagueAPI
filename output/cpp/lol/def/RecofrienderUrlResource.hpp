#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderUrlResource { 
    std::string url; 
  };
  void to_json(json& j, const RecofrienderUrlResource& v) {
  j["url"] = v.url; 
  }
  void from_json(const json& j, RecofrienderUrlResource& v) {
  v.url = j.at("url").get<std::string>(); 
  }
}