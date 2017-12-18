#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardOutput.hpp>
namespace lol {
  struct ClashRewardConfigEntry { 
    std::string key;
    std::vector<ClashRewardOutput> vals; 
  };
  inline void to_json(json& j, const ClashRewardConfigEntry& v) {
    j["key"] = v.key; 
    j["vals"] = v.vals; 
  }
  inline void from_json(const json& j, ClashRewardConfigEntry& v) {
    v.key = j.at("key").get<std::string>(); 
    v.vals = j.at("vals").get<std::vector<ClashRewardOutput>>(); 
  }
}