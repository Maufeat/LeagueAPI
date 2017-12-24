#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSlotEntry.hpp"
namespace lol {
  struct CollectionsLcdsSpellBookPageDTO { 
    uint64_t summonerId;
    bool current;
    std::string name;
    std::vector<CollectionsLcdsSlotEntry> slotEntries;
    uint32_t pageId;
    uint64_t createDate; 
  };
  inline void to_json(json& j, const CollectionsLcdsSpellBookPageDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["current"] = v.current; 
    j["name"] = v.name; 
    j["slotEntries"] = v.slotEntries; 
    j["pageId"] = v.pageId; 
    j["createDate"] = v.createDate; 
  }
  inline void from_json(const json& j, CollectionsLcdsSpellBookPageDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.current = j.at("current").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry>>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
  }
}