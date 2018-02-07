#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampionMinimal { 
    std::string alias;
    std::string banVoPath;
    std::string chooseVoPath;
    std::vector<std::string> disabledQueues;
    int32_t id;
    std::string name;
    LolChampionsCollectionsOwnership ownership;
    uint64_t purchased;
    std::vector<std::string> roles;
    std::string squarePortraitPath;
    std::string stingerSfxPath;
    bool active;
    bool botEnabled;
    bool freeToPlay;
    bool rankedPlayEnabled; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionMinimal& v) {
    j["alias"] = v.alias; 
    j["banVoPath"] = v.banVoPath; 
    j["chooseVoPath"] = v.chooseVoPath; 
    j["disabledQueues"] = v.disabledQueues; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["ownership"] = v.ownership; 
    j["purchased"] = v.purchased; 
    j["roles"] = v.roles; 
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["active"] = v.active; 
    j["botEnabled"] = v.botEnabled; 
    j["freeToPlay"] = v.freeToPlay; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionMinimal& v) {
    v.alias = j.at("alias").get<std::string>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.active = j.at("active").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
}