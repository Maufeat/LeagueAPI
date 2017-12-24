#pragma once
#include "../base_def.hpp" 
#include "LolStoreItemKey.hpp"
namespace lol {
  struct LolStorePageGroupingDTO { 
    std::vector<LolStoreItemKey> items;
    bool hidden;
    bool grouped; 
  };
  inline void to_json(json& j, const LolStorePageGroupingDTO& v) {
    j["items"] = v.items; 
    j["hidden"] = v.hidden; 
    j["grouped"] = v.grouped; 
  }
  inline void from_json(const json& j, LolStorePageGroupingDTO& v) {
    v.items = j.at("items").get<std::vector<LolStoreItemKey>>(); 
    v.hidden = j.at("hidden").get<bool>(); 
    v.grouped = j.at("grouped").get<bool>(); 
  }
}