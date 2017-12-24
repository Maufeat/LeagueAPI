#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsChampionSpell.hpp"
#include "LolChampionsCollectionsChampionSkin.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace lol {
  struct LolChampionsCollectionsChampion { 
    std::string squarePortraitPath;
    std::vector<std::string> roles;
    std::string banVoPath;
    std::vector<LolChampionsCollectionsChampionSkin> skins;
    std::string name;
    uint64_t purchased;
    bool freeToPlay;
    LolChampionsCollectionsChampionSpell passive;
    LolChampionsCollectionsOwnership ownership;
    std::string stingerSfxPath;
    bool active;
    std::vector<LolChampionsCollectionsChampionSpell> spells;
    bool rankedPlayEnabled;
    std::string alias;
    int32_t id;
    std::vector<std::string> disabledQueues;
    bool botEnabled;
    std::string chooseVoPath; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampion& v) {
    j["squarePortraitPath"] = v.squarePortraitPath; 
    j["roles"] = v.roles; 
    j["banVoPath"] = v.banVoPath; 
    j["skins"] = v.skins; 
    j["name"] = v.name; 
    j["purchased"] = v.purchased; 
    j["freeToPlay"] = v.freeToPlay; 
    j["passive"] = v.passive; 
    j["ownership"] = v.ownership; 
    j["stingerSfxPath"] = v.stingerSfxPath; 
    j["active"] = v.active; 
    j["spells"] = v.spells; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
    j["alias"] = v.alias; 
    j["id"] = v.id; 
    j["disabledQueues"] = v.disabledQueues; 
    j["botEnabled"] = v.botEnabled; 
    j["chooseVoPath"] = v.chooseVoPath; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampion& v) {
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>(); 
    v.roles = j.at("roles").get<std::vector<std::string>>(); 
    v.banVoPath = j.at("banVoPath").get<std::string>(); 
    v.skins = j.at("skins").get<std::vector<LolChampionsCollectionsChampionSkin>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.passive = j.at("passive").get<LolChampionsCollectionsChampionSpell>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>(); 
    v.active = j.at("active").get<bool>(); 
    v.spells = j.at("spells").get<std::vector<LolChampionsCollectionsChampionSpell>>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.alias = j.at("alias").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>(); 
  }
}