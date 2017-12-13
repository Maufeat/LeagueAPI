#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubTag { 
    std::string tag; 
  };
  void to_json(json& j, const ClubTag& v) {
    j["tag"] = v.tag; 
  }
  void from_json(const json& j, ClubTag& v) {
    v.tag = j.at("tag").get<std::string>(); 
  }
}