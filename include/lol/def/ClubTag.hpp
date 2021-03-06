#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubTag { 
    std::string tag; 
  };
  inline void to_json(json& j, const ClubTag& v) {
    j["tag"] = v.tag; 
  }
  inline void from_json(const json& j, ClubTag& v) {
    v.tag = j.at("tag").get<std::string>(); 
  }
}