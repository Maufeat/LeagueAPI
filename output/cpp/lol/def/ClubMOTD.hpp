#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubMOTD { 
    std::string motd; 
  };
  inline void to_json(json& j, const ClubMOTD& v) {
    j["motd"] = v.motd; 
  }
  inline void from_json(const json& j, ClubMOTD& v) {
    v.motd = j.at("motd").get<std::string>(); 
  }
}