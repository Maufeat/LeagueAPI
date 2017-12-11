#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolItemSetsPreferredItemSlot.hpp>"
#include "<leagueapi/definitions/LolItemSetsItemSetBlock.hpp>"

namespace leagueapi {
  struct LolItemSetsItemSet { /**/ 
    std::string mode;/**/
    std::string map;/**/
    std::vector<LolItemSetsItemSetBlock> blocks;/**/
    std::string startedFrom;/**/
    std::string uid;/**/
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots;/**/
    std::vector<int32_t> associatedMaps;/**/
    std::string type;/**/
    int32_t sortrank;/**/
    std::string title;/**/
    std::vector<int32_t> associatedChampions;/**/
  };
  static void to_json(json& j, const LolItemSetsItemSet& v) { 
    j["mode"] = v.mode;
    j["map"] = v.map;
    j["blocks"] = v.blocks;
    j["startedFrom"] = v.startedFrom;
    j["uid"] = v.uid;
    j["preferredItemSlots"] = v.preferredItemSlots;
    j["associatedMaps"] = v.associatedMaps;
    j["type"] = v.type;
    j["sortrank"] = v.sortrank;
    j["title"] = v.title;
    j["associatedChampions"] = v.associatedChampions;
  }
  static void from_json(const json& j, LolItemSetsItemSet& v) { 
    v.mode = j.at("mode").get<std::string>(); 
    v.map = j.at("map").get<std::string>(); 
    v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>(); 
    v.startedFrom = j.at("startedFrom").get<std::string>(); 
    v.uid = j.at("uid").get<std::string>(); 
    v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>(); 
    v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.sortrank = j.at("sortrank").get<int32_t>(); 
    v.title = j.at("title").get<std::string>(); 
    v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>(); 
  }
} 