#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsTalentEntry.hpp>
namespace lol {
  struct CollectionsLcdsMasteryBookPageDTO { 
    uint64_t createDate;
    std::string name;
    bool current;
    std::vector<CollectionsLcdsTalentEntry> talentEntries;
    uint32_t pageId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const CollectionsLcdsMasteryBookPageDTO& v) {
    j["createDate"] = v.createDate; 
    j["name"] = v.name; 
    j["current"] = v.current; 
    j["talentEntries"] = v.talentEntries; 
    j["pageId"] = v.pageId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, CollectionsLcdsMasteryBookPageDTO& v) {
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.current = j.at("current").get<bool>(); 
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry>>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}