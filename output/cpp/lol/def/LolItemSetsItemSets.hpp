#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolItemSetsItemSet.hpp>
namespace lol {
  struct LolItemSetsItemSets { 
    std::vector<LolItemSetsItemSet> itemSets;
    uint64_t timestamp;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolItemSetsItemSets& v) {
  j["itemSets"] = v.itemSets; 
  j["timestamp"] = v.timestamp; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolItemSetsItemSets& v) {
  v.itemSets = j.at("itemSets").get<std::vector<LolItemSetsItemSet>>(); 
  v.timestamp = j.at("timestamp").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}