#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubReferenceDto { 
    std::string clubName;
    std::string clubKey; 
  };
  inline void to_json(json& j, const ClubReferenceDto& v) {
    j["clubName"] = v.clubName; 
    j["clubKey"] = v.clubKey; 
  }
  inline void from_json(const json& j, ClubReferenceDto& v) {
    v.clubName = j.at("clubName").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
  }
}