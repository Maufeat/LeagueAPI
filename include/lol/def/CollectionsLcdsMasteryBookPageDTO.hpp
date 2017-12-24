#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsTalentEntry.hpp"
namespace lol {
  struct CollectionsLcdsMasteryBookPageDTO { 
    uint64_t summonerId;
    bool current;
    std::string name;
    std::vector<CollectionsLcdsTalentEntry> talentEntries;
    uint32_t pageId;
    uint64_t createDate; 
  };
  inline void to_json(json& j, const CollectionsLcdsMasteryBookPageDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["current"] = v.current; 
    j["name"] = v.name; 
    j["talentEntries"] = v.talentEntries; 
    j["pageId"] = v.pageId; 
    j["createDate"] = v.createDate; 
  }
  inline void from_json(const json& j, CollectionsLcdsMasteryBookPageDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.current = j.at("current").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry>>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
  }
}