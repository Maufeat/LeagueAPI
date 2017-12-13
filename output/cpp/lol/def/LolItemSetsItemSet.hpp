#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolItemSetsItemSetBlock.hpp>
#include <lol/def/LolItemSetsPreferredItemSlot.hpp>
namespace lol {
  struct LolItemSetsItemSet { 
    std::vector<LolItemSetsPreferredItemSlot> preferredItemSlots;
    std::vector<int32_t> associatedMaps;
    std::string type;
    std::string title;
    std::string map;
    int32_t sortrank;
    std::vector<int32_t> associatedChampions;
    std::vector<LolItemSetsItemSetBlock> blocks;
    std::string uid;
    std::string startedFrom;
    std::string mode; 
  };
  void to_json(json& j, const LolItemSetsItemSet& v) {
  j["preferredItemSlots"] = v.preferredItemSlots; 
  j["associatedMaps"] = v.associatedMaps; 
  j["type"] = v.type; 
  j["title"] = v.title; 
  j["map"] = v.map; 
  j["sortrank"] = v.sortrank; 
  j["associatedChampions"] = v.associatedChampions; 
  j["blocks"] = v.blocks; 
  j["uid"] = v.uid; 
  j["startedFrom"] = v.startedFrom; 
  j["mode"] = v.mode; 
  }
  void from_json(const json& j, LolItemSetsItemSet& v) {
  v.preferredItemSlots = j.at("preferredItemSlots").get<std::vector<LolItemSetsPreferredItemSlot>>(); 
  v.associatedMaps = j.at("associatedMaps").get<std::vector<int32_t>>(); 
  v.type = j.at("type").get<std::string>(); 
  v.title = j.at("title").get<std::string>(); 
  v.map = j.at("map").get<std::string>(); 
  v.sortrank = j.at("sortrank").get<int32_t>(); 
  v.associatedChampions = j.at("associatedChampions").get<std::vector<int32_t>>(); 
  v.blocks = j.at("blocks").get<std::vector<LolItemSetsItemSetBlock>>(); 
  v.uid = j.at("uid").get<std::string>(); 
  v.startedFrom = j.at("startedFrom").get<std::string>(); 
  v.mode = j.at("mode").get<std::string>(); 
  }
}