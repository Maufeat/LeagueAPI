#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/CollectionsLcdsTalentEntry.hpp>"

namespace leagueapi {
  struct CollectionsLcdsMasteryBookPageDTO { /**/ 
    uint32_t pageId;/**/
    uint64_t summonerId;/**/
    uint64_t createDate;/**/
    std::string name;/**/
    std::vector<CollectionsLcdsTalentEntry> talentEntries;/**/
    bool current;/**/
  };
  static void to_json(json& j, const CollectionsLcdsMasteryBookPageDTO& v) { 
    j["pageId"] = v.pageId;
    j["summonerId"] = v.summonerId;
    j["createDate"] = v.createDate;
    j["name"] = v.name;
    j["talentEntries"] = v.talentEntries;
    j["current"] = v.current;
  }
  static void from_json(const json& j, CollectionsLcdsMasteryBookPageDTO& v) { 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.talentEntries = j.at("talentEntries").get<std::vector<CollectionsLcdsTalentEntry>>(); 
    v.current = j.at("current").get<bool>(); 
  }
} 