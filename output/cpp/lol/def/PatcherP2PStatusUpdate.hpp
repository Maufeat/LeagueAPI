#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PatcherP2PStatusUpdate { 
    bool isAllowedByUser; 
  };
  inline void to_json(json& j, const PatcherP2PStatusUpdate& v) {
    j["isAllowedByUser"] = v.isAllowedByUser; 
  }
  inline void from_json(const json& j, PatcherP2PStatusUpdate& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>(); 
  }
}