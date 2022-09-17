import firebase_admin
from firebase_admin import credentials
from firebase_admin import db

class fire_rd:


    cred = credentials.Certificate('hackday2022.json')

    firebase_admin.initialize_app(hogehoge)

    users_ref = db.reference()
    def fire_add(z_data):
        fire_rd.users_ref.set({
            'z': z_data
            })
