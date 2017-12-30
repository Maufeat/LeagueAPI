#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsTalentEntry.hpp"
namespace lol {
  struct CollectionsLcdsMasteryBookPageDTO { 
    std::string name;
    uint32_t pageId;
    bool current;
    uint64_t createDate;
    std::vector<CollectionsLcdsTalentEntry> talentEntries;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const CollectionsLcdsMasteryBookPageDTO& v) {
    j["name"] = v.name; 
    j["pageId"] = v.pageId; 
    j["current"] = v.current; 
    j["createDate"] = v.createDate; 
    j["talentEntries"] = v.talentEntries; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, CollectionsLcdsMasteryBookPageDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.current = j.at("current").get<bool>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}