#pragma once
#include "../base_def.hpp" 
#include "LolStoreItemKey.hpp"
namespace lol {
  struct LolStorePageGroupingDTO { 
    bool grouped;
    bool hidden;
    std::vector<LolStoreItemKey> items; 
  };
  inline void to_json(json& j, const LolStorePageGroupingDTO& v) {
    j["grouped"] = v.grouped; 
    j["hidden"] = v.hidden; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolStorePageGroupingDTO& v) {
    v.grouped = j.at("grouped").get<bool>(); 
    v.hidden = j.at("hidden").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolStoreItemKey>>(); 
  }
}