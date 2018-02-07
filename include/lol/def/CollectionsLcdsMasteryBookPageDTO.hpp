#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsTalentEntry.hpp"
namespace lol {
  struct CollectionsLcdsMasteryBookPageDTO { 
    std::string name;
    uint32_t pageId;
    uint64_t summonerId;
    uint64_t createDate;
    std::vector<CollectionsLcdsTalentEntry> talentEntries;
    bool current; 
  };
  inline void to_json(json& j, const CollectionsLcdsMasteryBookPageDTO& v) {
    j["name"] = v.name; 
    j["pageId"] = v.pageId; 
    j["summonerId"] = v.summonerId; 
    j["createDate"] = v.createDate; 
    j["talentEntries"] = v.talentEntries; 
    j["current"] = v.current; 
  }
  inline void from_json(const json& j, CollectionsLcdsMasteryBookPageDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry>>(); 
    v.current = j.at("current").get<bool>(); 
  }
}